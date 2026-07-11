#include "PalLevelGimmickJumpSpot.h"
#include "Components/SceneComponent.h"

APalLevelGimmickJumpSpot::APalLevelGimmickJumpSpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->JumpActionClass = NULL;
    this->bPlayJumpPrepareMontage = false;
    this->JumpFowardVelocity = 0.00f;
    this->JumpZVelocity = 0.00f;
    this->Root = (USceneComponent*)RootComponent;
}


void APalLevelGimmickJumpSpot::EventOnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void APalLevelGimmickJumpSpot::EventOnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void APalLevelGimmickJumpSpot::EventOnActionLaunchCharacter() {
}


