#include "PalUIWorkProgressMultiTypeUtility.h"

UPalUIWorkProgressMultiTypeUtility::UPalUIWorkProgressMultiTypeUtility() {
}

EPalWorkSuitability UPalUIWorkProgressMultiTypeUtility::GetWorkSuitabilityForWidgetIndex(const UPalWorkProgressMultiType* Work, const int32 Index) {
    return EPalWorkSuitability::None;
}

UPalIndividualCharacterParameter* UPalUIWorkProgressMultiTypeUtility::GetWorkerIndividualParameterForWidgetIndex(const UPalWorkProgressMultiType* Work, const int32 Index) {
    return NULL;
}

UPalIndividualCharacterSlot* UPalUIWorkProgressMultiTypeUtility::GetWorkerCharacterSlotForWidgetIndex(const UPalWorkProgressMultiType* Work, const int32 Index) {
    return NULL;
}


