#include "PalLevelObject_LockGimmickTargetDestruction.h"
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"

APalLevelObject_LockGimmickTargetDestruction::APalLevelObject_LockGimmickTargetDestruction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->ExistingTargetSearchExtent = 1000.00f;
    this->LightOrbMoveSpeed = 300.00f;
    this->LightOrbInterpSpeed = 5.00f;
    this->bTargetDestroyed = false;
    this->bLightOrbArrived = false;
    this->SplineComponent->SetupAttachment(RootComponent);
}


void APalLevelObject_LockGimmickTargetDestruction::OnTargetDestroyed(UPalMapObjectModel* DestroyedModel) {
}

void APalLevelObject_LockGimmickTargetDestruction::OnRep_bTargetDestroyed() {
}

void APalLevelObject_LockGimmickTargetDestruction::OnRep_bLightOrbArrived() {
}


void APalLevelObject_LockGimmickTargetDestruction::OnLightOrbArrived() {
}

void APalLevelObject_LockGimmickTargetDestruction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalLevelObject_LockGimmickTargetDestruction, bTargetDestroyed);
    DOREPLIFETIME(APalLevelObject_LockGimmickTargetDestruction, bLightOrbArrived);
}


