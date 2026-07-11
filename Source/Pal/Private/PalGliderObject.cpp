#include "PalGliderObject.h"
#include "PalSoundPlayerComponent.h"

APalGliderObject::APalGliderObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GliderMaxSpeed = 0.00f;
    this->GliderSP = 10.00f;
    this->GliderAirControl = 0.00f;
    this->GliderGravityScale = 0.00f;
    this->bUseLeftHand = false;
    this->bUseRightHand = false;
    this->GliderStartAnimation = NULL;
    this->GliderLoopAnimation = NULL;
    this->GliderStartPlayerAnimation = NULL;
    this->GliderLoopPlayerAnimation = NULL;
    this->bIsJetpackType = false;
    this->bJetpackForceCenterCamera = false;
    this->bJetpackAlwaysVisible = false;
    this->JetpackForceCenterInterpSpeed = 0.00f;
    this->JetpackMaxFuel = 0.00f;
    this->JetpackFuelConsumptionPerSecond = 10.00f;
    this->JetpackBoostFuelConsumptionPerSecond = 0.00f;
    this->JetpackFuelAscentPenaltyMultiplier = 1.00f;
    this->JetpackFuelDescentReductionMultiplier = 1.00f;
    this->JetpackFuelThreshold = 80.00f;
    this->JetpackFuelRegenPerSecond = 20.00f;
    this->JetpackFuelDisplayInterpSpeed = 20.00f;
    this->bCanFlyWithoutFuel = false;
    this->JetpackInitialSpeed = 3500.00f;
    this->JetpackMinSpeed = 300.00f;
    this->JetpackGravityAcceleration = 2500.00f;
    this->JetpackSpeedDrag = 150.00f;
    this->JetpackMaxSpeedAscend = 8000.00f;
    this->JetpackMaxSpeedDescend = 8000.00f;
    this->JetpackPitchUpDeceleration = 1500.00f;
    this->JetpackPitchRate = 60.00f;
    this->JetpackYawRate = 90.00f;
    this->JetpackStartPitchInputDisableTime = 0.50f;
    this->JetpackAutoPitchDownRate = 20.00f;
    this->JetpackMaxPitchUpAngle = 60.00f;
    this->JetpackMaxAutoPitchDownAngle = 60.00f;
    this->JetpackMaxPitchDownAngle = 80.00f;
    this->JetpackAscendableSpeed = 2000.00f;
    this->JetpackStallPitchAngle = -10.00f;
    this->JetpackStallPitchRate = 30.00f;
    this->JetpackStallRecoverSpeed = 300.00f;
    this->JetpackStallSpeedHoldRate = 600.00f;
    this->JetpackBoostAcceleration = 3500.00f;
    this->JetpackBoostMaxSpeedAscend = 12000.00f;
    this->JetpackBoostMaxSpeedDescend = 12000.00f;
    this->JetpackBoostCameraModifierClass = NULL;
    this->SoundPlayerComponent = CreateDefaultSubobject<UPalSoundPlayerComponent>(TEXT("SoundPlayerComponent"));
    this->BoostNiagaraComponent = NULL;
}

void APalGliderObject::SpawnBoostEffect() {
}

void APalGliderObject::RefreshSkin(FName PalCharacterID) {
}



USkeletalMeshComponent* APalGliderObject::GetMainMesh_Implementation() const {
    return NULL;
}

USceneComponent* APalGliderObject::GetAkOwnerComponent() {
    return NULL;
}

void APalGliderObject::DestroyBoostEffect() {
}


