#include "PalStageUtility.h"

UPalStageUtility::UPalStageUtility() {
}

bool UPalStageUtility::IsActorUnderStageTop(const AActor* Actor) {
    return false;
}

bool UPalStageUtility::EqualEqual_PalStageInstanceId(FPalStageInstanceId A, FPalStageInstanceId B) {
    return false;
}

FWorldPartitionStreamingQuerySource UPalStageUtility::ApplyActorDataLayersToWorldPartitionQuerySource(const AActor* Actor, FWorldPartitionStreamingQuerySource QuerySource) {
    return FWorldPartitionStreamingQuerySource{};
}


