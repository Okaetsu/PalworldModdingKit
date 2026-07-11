#include "PalLevelObjectWarpPointDestination.h"
#include "Components/SceneComponent.h"

APalLevelObjectWarpPointDestination::APalLevelObjectWarpPointDestination(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->bShowLocationIcon = true;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
}

bool APalLevelObjectWarpPointDestination::IsUnlocked() const {
    return false;
}

FRotator APalLevelObjectWarpPointDestination::GetWarpRotation() const {
    return FRotator{};
}

FVector APalLevelObjectWarpPointDestination::GetWarpDestination() const {
    return FVector{};
}

FTransform APalLevelObjectWarpPointDestination::GetPairedDestinationTransform() const {
    return FTransform{};
}

FGuid APalLevelObjectWarpPointDestination::GetPairedDestinationLevelObjectId() const {
    return FGuid{};
}

FGuid APalLevelObjectWarpPointDestination::GetLocationId() const {
    return FGuid{};
}


