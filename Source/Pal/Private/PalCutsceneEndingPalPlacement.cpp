#include "PalCutsceneEndingPalPlacement.h"

FPalCutsceneEndingPalPlacement::FPalCutsceneEndingPalPlacement() {
    this->Priority = 0;
    this->bIsFrontRow = true;
    this->AdjacentLeft = -1;
    this->AdjacentRight = -1;
    this->Character = NULL;
    this->Radius = 0.00f;
    this->Offset = 0.00f;
}

