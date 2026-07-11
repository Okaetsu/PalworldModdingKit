#include "PalLevelObject_LockGimmickPalFight.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"

APalLevelObject_LockGimmickPalFight::APalLevelObject_LockGimmickPalFight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggerSphere = CreateDefaultSubobject<USphereComponent>(TEXT("TriggerSphere"));
    this->GameState = EPalFightGameState::Idle;
    this->GameStartServerTime = 0.00f;
    this->TimeLimitSeconds = 60.00f;
    this->TimeoutTeleportDelaySeconds = 2.00f;
    this->RemainingEnemyCount = 0;
    this->TotalEnemyCount = 0;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->LeaveGraceSeconds = 5.00f;
    this->AIControllerClass = NULL;
    this->ReturnPointComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ReturnPoint"));
    this->WidgetClass = NULL;
    this->bUseLightOrb = true;
    this->LightOrbMoveSpeed = 300.00f;
    this->LightOrbInterpSpeed = 5.00f;
    this->bLightOrbArrived = false;
    this->ReturnPointComponent->SetupAttachment(RootComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
    this->TriggerSphere->SetupAttachment(RootComponent);
}

void APalLevelObject_LockGimmickPalFight::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APalLevelObject_LockGimmickPalFight::OnSpawnComplete(FPalInstanceID InstanceId) {
}

void APalLevelObject_LockGimmickPalFight::OnRep_RemainingEnemyCount() {
}

void APalLevelObject_LockGimmickPalFight::OnRep_GameState() {
}

void APalLevelObject_LockGimmickPalFight::OnRep_bLightOrbArrived() {
}



void APalLevelObject_LockGimmickPalFight::OnPalDead(FPalDeadInfo DeadInfo) {
}

void APalLevelObject_LockGimmickPalFight::OnPalCaptured(APalCharacter* SelfCharacter, APalCharacter* Attacker) {
}


void APalLevelObject_LockGimmickPalFight::OnLightOrbArrived() {
}


void APalLevelObject_LockGimmickPalFight::OnCreatedIndividualParameter(UPalIndividualCharacterParameter* IndividualParameter) {
}

void APalLevelObject_LockGimmickPalFight::Multicast_NotifyUI_Implementation(APalPlayerCharacter* Player, EPalFightUINotify Notify) {
}

void APalLevelObject_LockGimmickPalFight::Multicast_ActivateAndPlaySpawnEffect_Implementation(APalCharacter* Character) {
}

void APalLevelObject_LockGimmickPalFight::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalLevelObject_LockGimmickPalFight, GameState);
    DOREPLIFETIME(APalLevelObject_LockGimmickPalFight, GameStartServerTime);
    DOREPLIFETIME(APalLevelObject_LockGimmickPalFight, RemainingEnemyCount);
    DOREPLIFETIME(APalLevelObject_LockGimmickPalFight, TotalEnemyCount);
    DOREPLIFETIME(APalLevelObject_LockGimmickPalFight, bLightOrbArrived);
}


