#include "PalMapObjectRecyclerParameterComponent.h"

UPalMapObjectRecyclerParameterComponent::UPalMapObjectRecyclerParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RecycleBoostBuffDuration = 300.00f;
    this->RecycleBoostSpeedMultiplier = 2.00f;
    this->BoostItemSlotCount = 6;
    this->RelicItemSlotCount = 12;
    this->OutputSlotCount = 40;
    this->OutputSlotCountDisplayCount = 36;
}

bool UPalMapObjectRecyclerParameterComponent::IsValidRelicItem(const FPalDataTableRowName_ItemData& ItemId) const {
    return false;
}

float UPalMapObjectRecyclerParameterComponent::GetRequiredWorkAmountForRelic(const FPalDataTableRowName_ItemData& RelicItemId) const {
    return 0.0f;
}

FName UPalMapObjectRecyclerParameterComponent::GetLotteryNameForRelic(const FPalDataTableRowName_ItemData& RelicItemId) const {
    return NAME_None;
}


