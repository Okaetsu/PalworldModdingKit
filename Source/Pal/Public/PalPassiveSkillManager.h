#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalPassiveSkillEffectGroupType.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalWeaponType.h"
#include "EPalWorkSuitability.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalItemCreateParameter.h"
#include "PalPassiveSkillConditionInfo.h"
#include "PalPassiveSkillDatabaseRow.h"
#include "PalPassiveSkillEffect.h"
#include "PalPassiveSkillEffectTypes.h"
#include "PalPassiveSkillManager.generated.h"

class UDataTable;
class UPalDynamicItemDataBase;
class UPalIndividualCharacterParameter;
class UPalPassiveSkillExtraParameterBase;

UCLASS(Blueprintable)
class PAL_API UPalPassiveSkillManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PassiveSkillDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PassiveSkillConditionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EPalPassiveSkillEffectType, UPalPassiveSkillExtraParameterBase*> PassiveSkillExtraParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalPassiveSkillEffectGroupType, FPalPassiveSkillEffectTypes> PassiveSkillEffectGroupTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalPassiveSkillEffectType> FirstOtomoOnlyStatusPassiveTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalWeaponType> BulletWeaponTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> AdditionalEffectExcludedItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> CollectItemDropNaturalObjectExcludedItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> PalAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> RarePalAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> RangedWeaponAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> MeleeWeaponAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> ArmorAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> AccessoryAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> RainbowPalAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> WorldTreePalAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> MutationPalAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PassiveSkillData> IgnoredPassiveIdsForBuffDisplay;
    
public:
    UPalPassiveSkillManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnCreatedDynamicItemDataInServer(UPalDynamicItemDataBase* CreatedItemData, const FPalItemCreateParameter& CreateParameter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIgnoredPassiveForBuffDisplay(const FName& PassiveId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBulletWeaponType(EPalWeaponType WeaponType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAdditionalEffectExcludedWeapon(const FName& ItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWorkSuitabilityAddRank(const UPalIndividualCharacterParameter* TargetIndividualParameter, EPalWorkSuitability SuitabilityType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EPalPassiveSkillEffectType> GetSkillEffectTypes(FName SkillName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkillData(const FName& SkillName, FPalPassiveSkillDatabaseRow& outSkillData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRandomWorldTreePalSkill();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetPassiveSkillNamesRowName(const TArray<FName>& passiveList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalPassiveSkillEffect> GetPassiveSkillEffect(FPalPassiveSkillConditionInfo& ConditionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPalAssignablePassiveIDs(TArray<FName>& List);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameTextId(FName SkillName);
    
};

