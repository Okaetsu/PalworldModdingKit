#include "PalLevelObjectItemRequiredWarpBarrier.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

APalLevelObjectItemRequiredWarpBarrier::APalLevelObjectItemRequiredWarpBarrier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->bUseNormalEffectEmission = true;
    this->NormalEffectEmissionValue = 1.00f;
    this->bUsePassableEffectEmission = true;
    this->PassableEffectEmissionValue = 1.00f;
    this->bSkipConfirmDialog = false;
    this->BlockingCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BlockingCollision"));
    this->TeleportArrow_Forward = CreateDefaultSubobject<UArrowComponent>(TEXT("TeleportArrow_Forward"));
    this->TeleportArrow_Backward = CreateDefaultSubobject<UArrowComponent>(TEXT("TeleportArrow_Backward"));
    this->BarrierEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BarrierEffect"));
    this->SequenceActor = NULL;
    this->BarrierEffect->SetupAttachment(RootComponent);
    this->BlockingCollision->SetupAttachment(RootComponent);
    this->TeleportArrow_Backward->SetupAttachment(RootComponent);
    this->TeleportArrow_Forward->SetupAttachment(RootComponent);
}

void APalLevelObjectItemRequiredWarpBarrier::OnUpdateObservedInventoryContainer(UPalItemContainer* Container) {
}

void APalLevelObjectItemRequiredWarpBarrier::OnUpdateObservedBossDefeatFlag(FName Key, bool bValue) {
}

void APalLevelObjectItemRequiredWarpBarrier::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalLevelObjectItemRequiredWarpBarrier::OnSequenceFinished() {
}

void APalLevelObjectItemRequiredWarpBarrier::OnConfirmWarpDialog(const bool bResult) {
}


void APalLevelObjectItemRequiredWarpBarrier::OnCompleteSyncPlayer(APalPlayerState* PlayerState) {
}


