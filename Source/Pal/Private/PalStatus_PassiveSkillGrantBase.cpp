#include "PalStatus_PassiveSkillGrantBase.h"

UPalStatus_PassiveSkillGrantBase::UPalStatus_PassiveSkillGrantBase() {
}

bool UPalStatus_PassiveSkillGrantBase::SetupPassiveSkillsByOwnerRank(AActor* TargetActor) {
    return false;
}

bool UPalStatus_PassiveSkillGrantBase::SetupPassiveSkills(AActor* TargetActor, const TArray<FName>& SkillNames) {
    return false;
}

TArray<FName> UPalStatus_PassiveSkillGrantBase::GetSkillNamesByRank(int32 Rank) const {
    return TArray<FName>();
}

int32 UPalStatus_PassiveSkillGrantBase::GetOwnerRank() const {
    return 0;
}

void UPalStatus_PassiveSkillGrantBase::ClearPassiveSkillsFromTarget(AActor* TargetActor) {
}

void UPalStatus_PassiveSkillGrantBase::ClearAllPassiveSkills() {
}


