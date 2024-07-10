import json
import os
import re
import sys
import unreal

import tkinter as tk
from tkinter.filedialog import askdirectory

# Keeps count of any missing assets
missing_assets = list()

# Typical logging stuff, nothing super interesting
absolute_path = os.path.dirname(os.path.abspath(__file__))
log_file_path = os.path.join(absolute_path, "logs")
if not os.path.exists(log_file_path):
    os.makedirs(log_file_path)
log_file = os.path.join(log_file_path, "missing_files.log")
logger = open(log_file, "w")

# TODO: Separate helper functions to their own file

def log_missing_asset(asset_path):
    if not missing_assets.count(asset_path):
        missing_assets.append(asset_path)
        logger.write(f"Missing asset: {asset_path}\n")

def ensure_path_ends_with_subpath(path, subpath):
    normalized_path = os.path.normpath(path)
    normalized_subpath = os.path.normpath(subpath)

    if normalized_path.endswith(normalized_subpath):
        return True
    return False

def load_json(json_file_path: str):
    with open(json_file_path, 'r') as file:
        return json.load(file)

def show_popup(message):
    unreal.EditorDialog.show_message("Success", message, unreal.AppMsgType.OK)

def show_error_popup(message):
    unreal.EditorDialog.show_message("Error", message, unreal.AppMsgType.OK)

def log(message):
    unreal.log(message)

def ask_directory_dialog():
    # Create a hidden TKinter window for folder selection, otherwise it'll stay on the screen and crash Unreal
    root = tk.Tk()
    root.withdraw()
    
    # Expected ending path: FModel/Output/Exports
    folder_selected = askdirectory(title="Select FModel Exports Folder")
    
    if folder_selected:
        return folder_selected
    else:
        return None
    
def get_package_path(path: str):
    """
    Expected path format: /Game/Pal/Blueprint/Weapon/BP_Example
    """
    # Use os.path.split to separate the last part of the path
    parent_path, _ = os.path.split(path)
    return parent_path
    
def get_asset_name_from_path(path):
    """
    Example: /Game/Pal/Blueprint/Weapon/BP_Example.BP_Example_C -> BP_Example
    """
    # Use os.path.basename to get the last part of the path
    asset_with_extension = os.path.basename(path)
    # If there's an extension (like .BP_Example_C), split and take the first part (BP_Example)
    asset_name = asset_with_extension.split('.')[0]
    return asset_name

def remove_path_suffix(path):
    """
    Remove the .<suffix> part from the end of the path
    """
    return re.sub(r'\.[^./]+$', '', path)

def add_underscore_before_capitals(name):
    """
    Example output: Essential_UnlockPlayerFuture -> Essential_Unlock_Player_Future
    """
    # Handle cases where a lowercase letter or digit is followed by an uppercase letter
    s1 = re.sub('([a-z0-9])([A-Z])', r'\1_\2', name)

    # Handle cases where an uppercase letter is followed by another uppercase letter and then a lowercase letter
    s2 = re.sub('([A-Z]+)([A-Z][a-z])', r'\1_\2', s1).lower()

    # Deal with bools separately
    if s2.startswith("b_"):
        s2 = s2.replace("b_", "")

    return s2

def get_enum_value(enum_class, enum_name):
    """
    Convert enum string to a real enum value
    """
    return getattr(enum_class, enum_name)

def extract_class_name(class_string):
    """
    Extract the class name from a string like UScriptClass'PalStaticWeaponItemData'

    Example result: PalStaticWeaponItemData
    """
    match = re.search(r"\'(.+?)\'", class_string)
    if match:
        return match.group(1)
    return None

def generate_dummy_blueprint(blueprint_path: str) -> object:
    """
    Expected example path: /Game/Pal/Blueprint/Weapon/BP_Example.BP_Example_C
    """
    path_no_suffix = remove_path_suffix(blueprint_path)
    blueprint_name = get_asset_name_from_path(path_no_suffix)
    blueprint_package_path = get_package_path(path_no_suffix)

    # Check if the Blueprint already exists
    if unreal.EditorAssetLibrary.does_asset_exist(path_no_suffix):
        asset_registry = unreal.AssetRegistryHelpers.get_asset_registry()
        return asset_registry.get_asset_by_object_path(path_no_suffix)

    # Create a new Blueprint asset
    blueprint_factory = unreal.BlueprintFactory()
    blueprint_factory.set_editor_property("ParentClass", unreal.Actor)
    new_blueprint = unreal.AssetToolsHelpers.get_asset_tools().create_asset(blueprint_name, blueprint_package_path, unreal.Blueprint, blueprint_factory)
    if new_blueprint:
        unreal.EditorAssetLibrary.save_asset(path_no_suffix)
        return new_blueprint

def generate_dummy_blueprints(j: json):
    for item in j:
        if item['Type'] != "PalStaticItemDataAsset":
            # These items usually have Blueprints tied to them, so we check if the blueprint exists and if not then create a dummy blueprint
            properties = item['Properties']
            if 'actorClass' in properties:
                generate_dummy_blueprint(properties['actorClass']['AssetPathName'])
            if 'VisualBlueprintClassSoft' in properties:
                generate_dummy_blueprint(properties['VisualBlueprintClassSoft']['AssetPathName'])
    log("Finished creating dummy Blueprints.")

def create_instance_in_package(asset_class, outer):
    """
    Create an in-memory instance of the given class within the specified outer package
    """
    instance = unreal.new_object(asset_class, outer)
    return instance

def load_texture(texture_path):
    return unreal.EditorAssetLibrary.load_asset(texture_path)

def load_blueprint_class(class_path):
    return unreal.EditorAssetLibrary.load_blueprint_class(class_path)

def load_class(class_path):
    return unreal.EditorAssetLibrary.load_asset(class_path)

# Setup the item_map variable for later when we use it to create actual assets
def fill_item_map(j: json, item_map_reference: dict):
    for item in j:
        if 'Properties' in item:
            properties = item['Properties']
            if 'ID' in properties:
                item_map_reference[properties['ID']] = item

def convert_to_python_format(unreal_style_name):
    # Use regular expression to insert underscores before capital letters, ignoring the first letter
    snake_case_name = re.sub(r'([a-z])([A-Z])', r'\1_\2', unreal_style_name)
    snake_case_name = snake_case_name.lower()
    
    # Adjust for cases like bNotConsumed -> not_consumed
    if snake_case_name.startswith("b_"):
        snake_case_name = snake_case_name.replace("b_", "")

    return snake_case_name

# TODO: Better way of handling Unreal props, it's a mess currently
def handle_unreal_property(instance, property_name, property_value):
    if property_name == "id":
        setattr(instance, property_name, unreal.Name(property_value))
    elif property_name ==  "icon_texture":
        asset_icon_path = remove_path_suffix(property_value['AssetPathName'])
        if asset_icon_path:
            texture = load_texture(asset_icon_path)
            if texture:
                setattr(instance, property_name, texture)
            else:
                unreal.log_error(f"Failed to load texture: {asset_icon_path}")
                log_missing_asset(asset_icon_path)
    elif property_name ==  "type_a":
        asset_type_a = property_value.split("::")[-1]
        asset_type_a = add_underscore_before_capitals(asset_type_a)
        setattr(instance, property_name, get_enum_value(unreal.PalItemTypeA, asset_type_a.upper()))
    elif property_name == "type_b":
        asset_type_b = property_value.split("::")[-1]
        asset_type_b = add_underscore_before_capitals(asset_type_b)
        setattr(instance, property_name, get_enum_value(unreal.PalItemTypeB, asset_type_b.upper()))
    elif property_name == "passive_skill" or property_name == "passive_skill2" or property_name == "passive_skill3" or property_name == "passive_skill4":
        setattr(instance, property_name, unreal.Name(property_value))
    elif property_name == "dynamic_item_data_class":
        dynamic_item_data_class = extract_class_name(property_value['ObjectName'])
        setattr(instance, property_name, getattr(unreal, dynamic_item_data_class))
    elif property_name == "visual_blueprint_class_soft":
            asset_visual_class_path = property_value['AssetPathName']
            if asset_visual_class_path:
                blueprint_class_path = remove_path_suffix(asset_visual_class_path)
                blueprint_class = load_blueprint_class(blueprint_class_path)
                if blueprint_class:
                    setattr(instance, property_name, blueprint_class)
                else:
                    unreal.log_error(f"Failed to set visual blueprint: {asset_visual_class_path}")
                    log_missing_asset(asset_visual_class_path)
    elif property_name == "actor_class":
        asset_actor_class_path = property_value['AssetPathName']
        if asset_actor_class_path:
            blueprint_class_path = remove_path_suffix(asset_actor_class_path)
            blueprint_class = load_blueprint_class(blueprint_class_path)
            if blueprint_class:
                setattr(instance, property_name, blueprint_class)
            else:
                unreal.log_error(f"Failed to set actor class: {asset_actor_class_path}")
                log_missing_asset(asset_actor_class_path)
    elif property_name == "override_name_msg_id" or property_name == "override_desc_msg_id":
        setattr(instance, property_name, unreal.Name(property_value))
    elif property_name == "drop_item_type":
        drop_item_type = property_value.split("::")[-1]
        drop_item_type = add_underscore_before_capitals(drop_item_type)
        setattr(instance, property_name, get_enum_value(unreal.PalDropItemType, drop_item_type.upper()))
    elif property_name == "waza_id":
        waza_id = property_value.split("::")[-1]
        waza_id = add_underscore_before_capitals(waza_id)
        setattr(instance, property_name, get_enum_value(unreal.PalWazaID, waza_id.upper()))
    elif property_name == "static_mesh_path":
        static_mesh_path = property_value['AssetPathName']
        if static_mesh_path:
            static_mesh_class_path = remove_path_suffix(static_mesh_path)
            static_mesh_class = load_class(static_mesh_class_path)
            if static_mesh_class:
                setattr(instance, property_name, static_mesh_class)
            else:
                unreal.log_error(f"Failed to set static mesh: {static_mesh_path}")
                log_missing_asset(static_mesh_path)
    else:
        setattr(instance, property_name, property_value)

# Function to add new instances to the TMap variable in the DataAsset
def add_instances_to_map(data_asset_path, map_var_name, entries):
    # Try to load the DA_StaticItemDataAsset
    data_asset = unreal.EditorAssetLibrary.load_asset(f"{data_asset_path}/DA_StaticItemDataAsset")

    # Create the DA_StaticItemDataAsset if it doesn't exist
    if not data_asset:
        data_asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
        data_asset_factory = unreal.DataAssetFactory()
        data_asset = data_asset_tools.create_asset("DA_StaticItemDataAsset", data_asset_path, unreal.PalStaticItemDataAsset, data_asset_factory)
        unreal.EditorAssetLibrary.save_loaded_asset(data_asset)
        log(f"Creating a new DA_StaticItemDataAsset")
    
    map_var_name = "static_item_data_map"

    # Get the TMap variable
    if not hasattr(data_asset, map_var_name):
        unreal.log_error(f"DataAsset does not have a TMap variable named: {map_var_name}")
        sys.exit()

    # Add None to the TMap since it's in the original one too
    getattr(data_asset, map_var_name)[unreal.Name("None")] = None

    for key, entry in entries.items():
        # Skip None because we already added it
        if key == "None":
            continue
        asset_class = extract_class_name(entry['Class'])
        item_class = getattr(unreal, asset_class)

        # IMPORTANT, package has to be manually set to be same as the DataAsset or it won't compile the generated objects and the fields end up as null
        new_instance = create_instance_in_package(item_class, data_asset)
        if new_instance:
            if 'Properties' in entry:
                properties = entry['Properties']
                for prop_name, prop_value in properties.items():
                    prop_name_fixed = add_underscore_before_capitals(prop_name)
                    handle_unreal_property(new_instance, prop_name_fixed, prop_value)

            # Add the instance to the TMap
            getattr(data_asset, map_var_name)[unreal.Name(key)] = new_instance

    blueprint_class_path = "/Game/Pal/Blueprint/Item/VisualModel/BP_Item_Any"
    generate_dummy_blueprint(blueprint_class_path)
    blueprint_class = load_blueprint_class(blueprint_class_path)
    setattr(data_asset, "undefined_visual_blueprint_class_soft", blueprint_class)

    # Save the DataAsset after adding everything
    unreal.EditorAssetLibrary.save_loaded_asset(data_asset)
    log(f"DataAsset saved: {data_asset_path}/DA_StaticItemDataAsset")

    # Report any potential missing assets since it'll cause weird behaviour in-game if there's anything missing
    missing_file_count = missing_assets.__len__()
    if missing_file_count:
        show_error_popup(f"Generation of DA_StaticItemDataAsset wasn't fully completed, {missing_file_count} missing assets were found. Please check the log file.\n\n {log_file}")
    else:
        show_popup("All done, go make some items!")


# Ask to setup the exports path for FModel
fmodel_exports_path = ask_directory_dialog()

# Make sure the path ends with FModel/Output/Exports
if not ensure_path_ends_with_subpath(fmodel_exports_path, "FModel/Output/Exports"):
    show_error_popup(f"FModel exports directory is invalid, expected FModel/Output/Exports at the end.\n\n{fmodel_exports_path}")
    sys.exit()

item_map = {}

data_asset_file_name = "DA_StaticItemDataAsset.json"
data_asset_json_path = f"{fmodel_exports_path}/Pal/Content/Pal/DataAsset/Item/{data_asset_file_name}"

# Pal/Content in Unreal is treated as /Game/
data_asset_unreal_path = "/Game/Pal/DataAsset/Item"

map_var_name = "StaticItemDataMap"

# Check that DA_StaticItemDataAsset was actually exported from FModel before we do anything
if not os.path.isfile(data_asset_json_path):
    show_error_popup(f"{data_asset_file_name} doesn't exist, please export it from FModel first!")
    sys.exit()

json_file = load_json(data_asset_json_path)

generate_dummy_blueprints(json_file)
fill_item_map(json_file, item_map)
add_instances_to_map(data_asset_unreal_path, map_var_name, item_map)

logger.close()