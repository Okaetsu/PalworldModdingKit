#include "PalLevelObjectObtainable.h"

APalLevelObjectObtainable::APalLevelObjectObtainable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObtainCeremonyActionClass = NULL;
    this->bObtainItemDuringCeremony = true;
    this->SpawnedObtainFXComponent = NULL;
    this->bPickedInClient = false;
}

void APalLevelObjectObtainable::OnUpdateFlagMapRecord(const FName Key, const bool bFlag) {
}

void APalLevelObjectObtainable::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalLevelObjectObtainable::OnCompleteSyncPlayer(APalPlayerState* PlayerState) {
}

FRotator APalLevelObjectObtainable::GetObtainFXRotation_Implementation() const {
    return FRotator{};
}



