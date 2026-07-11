#include "PalPassiveSkillManager.h"

UPalPassiveSkillManager::UPalPassiveSkillManager() {
    this->PassiveSkillDataTable = NULL;
    this->PassiveSkillConditionDataTable = NULL;
}

void UPalPassiveSkillManager::OnCreatedDynamicItemDataInServer(UPalDynamicItemDataBase* CreatedItemData, const FPalItemCreateParameter& CreateParameter) {
}

bool UPalPassiveSkillManager::IsIgnoredPassiveForBuffDisplay(const FName& PassiveId) const {
    return false;
}

bool UPalPassiveSkillManager::IsBulletWeaponType(EPalWeaponType WeaponType) const {
    return false;
}

bool UPalPassiveSkillManager::IsAdditionalEffectExcludedWeapon(const FName& ItemId) const {
    return false;
}

int32 UPalPassiveSkillManager::GetWorkSuitabilityAddRank(const UPalIndividualCharacterParameter* TargetIndividualParameter, EPalWorkSuitability SuitabilityType) {
    return 0;
}

TArray<EPalPassiveSkillEffectType> UPalPassiveSkillManager::GetSkillEffectTypes(FName SkillName) {
    return TArray<EPalPassiveSkillEffectType>();
}

bool UPalPassiveSkillManager::GetSkillData(const FName& SkillName, FPalPassiveSkillDatabaseRow& outSkillData) {
    return false;
}

FName UPalPassiveSkillManager::GetRandomWorldTreePalSkill() {
    return NAME_None;
}

TArray<FName> UPalPassiveSkillManager::GetPassiveSkillNamesRowName(const TArray<FName>& passiveList) {
    return TArray<FName>();
}

TArray<FPalPassiveSkillEffect> UPalPassiveSkillManager::GetPassiveSkillEffect(FPalPassiveSkillConditionInfo& ConditionInfo) {
    return TArray<FPalPassiveSkillEffect>();
}

void UPalPassiveSkillManager::GetPalAssignablePassiveIDs(TArray<FName>& List) {
}

FName UPalPassiveSkillManager::GetNameTextId(FName SkillName) {
    return NAME_None;
}


