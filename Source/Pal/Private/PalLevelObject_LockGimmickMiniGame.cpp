#include "PalLevelObject_LockGimmickMiniGame.h"

APalLevelObject_LockGimmickMiniGame::APalLevelObject_LockGimmickMiniGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentParameter = NULL;
}

void APalLevelObject_LockGimmickMiniGame::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalLevelObject_LockGimmickMiniGame::OnMiniGameComplete(UPalHUDDispatchParameterBase* Parameter) {
}


