#include "PalBreedingUtility.h"

UPalBreedingUtility::UPalBreedingUtility() {
}

FPalItemSlotIdAndNum UPalBreedingUtility::FindConsumableBreedItem(const UPalItemContainer* Container, const TArray<FName>& TargetItemIds) {
    return FPalItemSlotIdAndNum{};
}

bool UPalBreedingUtility::CanProceedBreeding(const UPalWorkBase* Work) {
    return false;
}

float UPalBreedingUtility::CalcBreedBuffRate(const UPalWorkBase* Work, const UPalBaseCampModel* BaseCampModel) {
    return 0.0f;
}


