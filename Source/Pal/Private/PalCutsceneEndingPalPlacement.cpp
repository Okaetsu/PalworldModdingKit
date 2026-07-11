#include "PalCutsceneEndingPalPlacement.h"

FPalCutsceneEndingPalPlacement::FPalCutsceneEndingPalPlacement() {
    this->Priority = 0;
    this->bIsFrontRow = false;
    this->AdjacentLeft = 0;
    this->AdjacentRight = 0;
    this->Character = NULL;
    this->Radius = 0.00f;
    this->Offset = 0.00f;
}

