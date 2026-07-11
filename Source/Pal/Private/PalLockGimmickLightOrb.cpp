#include "PalLockGimmickLightOrb.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/SceneComponent.h"

APalLockGimmickLightOrb::APalLockGimmickLightOrb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->AIControllerClass = NULL;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->FloatingMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingMovement"));
}


