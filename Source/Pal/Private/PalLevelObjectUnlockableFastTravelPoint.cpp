#include "PalLevelObjectUnlockableFastTravelPoint.h"

APalLevelObjectUnlockableFastTravelPoint::APalLevelObjectUnlockableFastTravelPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUnlocked = false;
    this->EnableRequestUnlock = true;
}

void APalLevelObjectUnlockableFastTravelPoint::OnUpdateFlagMapRecord(const FName Key, const bool bFlag) {
}

void APalLevelObjectUnlockableFastTravelPoint::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalLevelObjectUnlockableFastTravelPoint::OnEndCutscene(UPalCutsceneBindParameter_FasttravelPoint* CutsceneParameter) {
}

void APalLevelObjectUnlockableFastTravelPoint::OnCompleteSyncPlayer(APalPlayerState* PlayerState) {
}

bool APalLevelObjectUnlockableFastTravelPoint::IsUnlocked() const {
    return false;
}



