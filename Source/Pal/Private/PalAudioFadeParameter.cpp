#include "PalAudioFadeParameter.h"

FPalAudioFadeParameter::FPalAudioFadeParameter() {
    this->FadeType = EPalAudioFadeType::None;
    this->CurrentVolume = 1.00f;
    this->FadeDurationSeconds = 0.00f;
}

