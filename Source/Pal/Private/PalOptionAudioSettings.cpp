#include "PalOptionAudioSettings.h"

FPalOptionAudioSettings::FPalOptionAudioSettings() {
    this->Master = 0.50f;
    this->BGM = 1.00f;
    this->SE = 1.00f;
    this->PalVoice = 1.00f;
    this->PlayerVoice = 1.00f;
    this->NPCVoice = 1.00f;
    this->Ambient = 1.00f;
    this->UI = 1.00f;
    this->bEnableRarePalEffectSound = true;
    this->bEnablePalEffectSound = true;
    this->bEnableCraneGameSound = true;
    this->bEnableBaseCampPalWorkingSound = true;
}

