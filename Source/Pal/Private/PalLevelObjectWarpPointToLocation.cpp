#include "PalLevelObjectWarpPointToLocation.h"

APalLevelObjectWarpPointToLocation::APalLevelObjectWarpPointToLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Performance = NULL;
    this->ActivateCondition = NULL;
}

void APalLevelObjectWarpPointToLocation::PlayWarpEffect() {
}

void APalLevelObjectWarpPointToLocation::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalLevelObjectWarpPointToLocation::OnReceiveWarpConfirmResult(const bool bResult) {
}


void APalLevelObjectWarpPointToLocation::OnCompleteSyncPlayer(APalPlayerState* PlayerState) {
}

bool APalLevelObjectWarpPointToLocation::IsUnlocked() const {
    return false;
}

FTransform APalLevelObjectWarpPointToLocation::GetWarpTargetTransform() const {
    return FTransform{};
}

EPalWarpPointState APalLevelObjectWarpPointToLocation::GetWarpPointState() const {
    return EPalWarpPointState::Undiscovered;
}

FGuid APalLevelObjectWarpPointToLocation::GetSourceDestinationLevelObjectId() const {
    return FGuid{};
}

UPalLevelObjectWarpPointToLocationPerformanceBase* APalLevelObjectWarpPointToLocation::GetPerformance() const {
    return NULL;
}


