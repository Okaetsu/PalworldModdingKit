#include "PalOptionKeyboardSettings.h"

FPalOptionKeyboardSettings::FPalOptionKeyboardSettings() {
    this->bIsDashHold = true;
    this->MouseSensitivity = 1.00f;
    this->MouseAimSensitivity = 1.00f;
    this->bIsReverseYaw = false;
    this->bIsReversePitch = false;
    this->bIsRevertGliderPitch = true;
    this->bEnableAimAssist = false;
    this->bShowChat = true;
    this->bIsToggleInteract = false;
    this->bIsToggleBuildMode = false;
}

