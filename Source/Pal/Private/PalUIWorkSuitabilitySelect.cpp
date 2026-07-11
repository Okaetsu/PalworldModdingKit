#include "PalUIWorkSuitabilitySelect.h"

UPalUIWorkSuitabilitySelect::UPalUIWorkSuitabilitySelect() {
}

void UPalUIWorkSuitabilitySelect::RequestChangeSuitabilitySetting(const UPalIndividualCharacterSlot* TargetCharacterSlot, EPalWorkSuitability SuitabilityType, bool IsOn) {
}

void UPalUIWorkSuitabilitySelect::RequestChangeBattleSetting(const UPalIndividualCharacterSlot* TargetCharacterSlot, bool CanBattle) {
}

bool UPalUIWorkSuitabilitySelect::HasBasePalOperationPermissionByLocalPlayer() const {
    return false;
}

bool UPalUIWorkSuitabilitySelect::GetTargetCharacterContainer(UPalIndividualCharacterContainer*& OutContainer) const {
    return false;
}


