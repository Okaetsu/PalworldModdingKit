#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalEggSpecialType.h"
#include "EPalItemUseEffectType.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalItemData.h"
#include "PalItemId.h"
#include "Templates/SubclassOf.h"
#include "PalItemIDManager.generated.h"

class UDataTable;
class UPalItemUseProcessor;
class UPalStaticItemDataAsset;
class UPalStaticItemDataBase;
class UPalStaticItemDataTable;

UCLASS(Blueprintable)
class UPalItemIDManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalStaticItemDataAsset* StaticItemDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalItemUseEffectType, TSubclassOf<UPalItemUseProcessor>> ItemUseProcessorClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalItemUseEffectType, UPalItemUseProcessor*> ItemUseProcessorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> WazaMachineStaticItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData WoodItemRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData EggItemRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData PalUpgradeStoneItemRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData MoneyItemRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData CrudeOilItemRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemIDRedirectDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> ItemIDRedirectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalStaticItemDataTable* StaticItemDataTable;
    
public:
    UPalItemIDManager();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsWorldTreePalEggStaticItemId(const FName StaticItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    FName GetStaticItemIdPalEgg(const UObject* WorldContextObject, const FName CharacterID, EPalEggSpecialType InEggSpecialType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalStaticItemDataBase* GetStaticItemData(const FName StaticItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalItemData GetItemData(const FPalItemId& ItemId) const;
    
};

