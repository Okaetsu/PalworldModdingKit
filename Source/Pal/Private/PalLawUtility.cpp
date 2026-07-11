#include "PalLawUtility.h"

UPalLawUtility::UPalLawUtility() {
}

bool UPalLawUtility::TryResolveCriminalHandleFromDeadInfo(const UObject* WorldContextObject, const FPalDeadInfo& DeadInfo, UPalIndividualCharacterHandle*& OutCriminalHandle) {
    return false;
}

bool UPalLawUtility::TryResolveCriminalHandleFromDamageResult(const UObject* WorldContextObject, const FPalDamageResult& DamageResult, UPalIndividualCharacterHandle*& OutCriminalHandle) {
    return false;
}

AActor* UPalLawUtility::ResolveCriminalActor(const UObject* WorldContextObject, AActor* RawAttacker, AActor* Defender) {
    return NULL;
}

bool UPalLawUtility::IsEqualsGroupIndividualIdAndSlotIds(const UObject* WorldContextObject, const FPalInstanceID& IndividualId, const TArray<FPalItemSlotId>& SlotIds, const bool IgnoreNoBelongSlot) {
    return false;
}

bool UPalLawUtility::ExistOtherGroupFromSlotIds(const UObject* WorldContextObject, const FPalInstanceID& IndividualId, const TArray<FPalItemSlotId>& SlotIds, const bool IgnoreNoBelongSlot, FGuid& OutGroupId) {
    return false;
}


