#include "PalEndingCutsceneProcess.h"

UPalEndingCutsceneProcess::UPalEndingCutsceneProcess() {
    this->StreamingSourceActor = NULL;
    this->SpawnedCutsceneActor = NULL;
}

void UPalEndingCutsceneProcess::OnTeleportCompleted() {
}

void UPalEndingCutsceneProcess::OnCutsceneFinished(bool bIsSkipped) {
}


