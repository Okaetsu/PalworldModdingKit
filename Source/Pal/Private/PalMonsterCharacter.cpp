#include "PalMonsterCharacter.h"
#include "PalCharacterLiftupObjectComponent.h"

APalMonsterCharacter::APalMonsterCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowReceiveTickEventOnDedicatedServer = false;
    this->LiftupObjectComponent = CreateDefaultSubobject<UPalCharacterLiftupObjectComponent>(TEXT("Liftup"));
    this->RideMoveAkEvent = NULL;
}

void APalMonsterCharacter::SelectedFeedingItem(const FPalItemSlotId& ItemSlotId, const int64 Num) {
}

void APalMonsterCharacter::RefreshSkin(bool bIsActive) {
}

void APalMonsterCharacter::OnTriggerInteract(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalMonsterCharacter::OnSelectedOrderWorkerRadialMenu(UPalHUDDispatchParameterBase* Parameter) {
}

bool APalMonsterCharacter::IsLiftupObject() const {
    return false;
}


UAkAudioEvent* APalMonsterCharacter::GetRideMoveAkEvent() const {
    return NULL;
}


