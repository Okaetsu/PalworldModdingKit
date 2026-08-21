#include "PalOptionPadSettings.h"

FPalOptionPadSettings::FPalOptionPadSettings() {
    this->bIsDashHold = false;
    this->LeftStickThreshold = 0.00f;
    this->RightStickSensitivity = 1.00f;
    this->RightStickAimSensitivity = 1.00f;
    this->RightStickThreshold = 0.00f;
    this->bIsRightStickReverseYaw = false;
    this->bIsRightStickReversePitch = false;
    this->bIsLeftStickRevertGliderPitch = true;
    this->bEnableVibration = true;
    this->bEnableAimAssist = true;
    this->bIsToggleInteract = false;
    this->bIsToggleBuildMode = false;
}

