#include "PalDimensionWarpPoint.h"
#include "Components/SceneComponent.h"

APalDimensionWarpPoint::APalDimensionWarpPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
}

FRotator APalDimensionWarpPoint::GetWarpRotation() const {
    return FRotator{};
}

FVector APalDimensionWarpPoint::GetWarpDestination() const {
    return FVector{};
}

FGuid APalDimensionWarpPoint::GetLocationId() const {
    return FGuid{};
}


