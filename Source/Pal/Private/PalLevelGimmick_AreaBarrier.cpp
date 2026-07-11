#include "PalLevelGimmick_AreaBarrier.h"
#include "Components/SceneComponent.h"

APalLevelGimmick_AreaBarrier::APalLevelGimmick_AreaBarrier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TeleportStartSE = NULL;
}


void APalLevelGimmick_AreaBarrier::HandleLockStateChanged(const FName InLockId, bool bFlag) {
}

void APalLevelGimmick_AreaBarrier::HandleCompleteSyncPlayer(APalPlayerState* PlayerState) {
}

void APalLevelGimmick_AreaBarrier::HandleBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



