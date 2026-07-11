#include "PalOptionAudioSettings.h"

FPalOptionAudioSettings::FPalOptionAudioSettings() {
    this->Master = 0.00f;
    this->BGM = 0.00f;
    this->SE = 0.00f;
    this->PalVoice = 0.00f;
    this->PlayerVoice = 0.00f;
    this->NPCVoice = 0.00f;
    this->Ambient = 0.00f;
    this->UI = 0.00f;
    this->bEnableRarePalEffectSound = false;
    this->bEnablePalEffectSound = false;
    this->bEnableCraneGameSound = false;
    this->bEnableBaseCampPalWorkingSound = false;
}

