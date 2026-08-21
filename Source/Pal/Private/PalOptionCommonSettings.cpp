#include "PalOptionCommonSettings.h"

FPalOptionCommonSettings::FPalOptionCommonSettings() {
    this->PalRideCameraLengthRate = 1.00f;
    this->FOV = 0.00f;
    this->bEnableMotionBlur = true;
    this->bEnableCameraShake = true;
    this->Brightness = 0.00f;
    this->bDisableAutoPickupItemInOverflowWeight = false;
    this->bDisableGuildJoinRequest = false;
    this->bHideCraftExpLog = false;
    this->ScreenPercentage = 75;
    this->MapObjectDrawDistanceType = EPalOptionMapObjectDrawDistanceType::NoLimit;
    this->bArachnophobiaMode = false;
    this->bShowFriendPalAura = true;
    this->bUseVerticalFOV = false;
}

