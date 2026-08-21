#include "PalOptionGraphicsSettings.h"

FPalOptionGraphicsSettings::FPalOptionGraphicsSettings() {
    this->GraphicsLevel = EPalOptionGraphicsLevel::None;
    this->WindowMode = EWindowMode::Fullscreen;
    this->bEnableVSync = true;
    this->bEnableMotionBlur = true;
    this->AntiAliasingType = AAM_TSR;
    this->bEnableCameraShake = true;
    this->bEnableCameraRecoil = false;
    this->FOV = 0.00f;
    this->PalRideCameraLengthRate = 1.00f;
    this->LODBias = 0.00f;
    this->DrawDistance = 0.00f;
    this->GrassDrawDistance = 0.00f;
    this->bEnableShadow = false;
    this->ShadowResolution = 0.00f;
    this->CommonQuality = 0;
    this->ViewDistanceQuality = 0;
    this->FoliageQuality = 0;
    this->ShadowQuality = 0;
    this->MapObjectDrawDistanceType = EPalOptionMapObjectDrawDistanceType::NoLimit;
    this->Brightness = 0.00f;
    this->bEnableAutoContrast = false;
    this->TextureQuality = 0;
    this->DLSSMode = EPalOptionUpscalingLevel::Performance;
    this->DLSSFrameGenerationMode = EPalDLSSGMode::Auto;
    this->DLSSGeneratedFrames = 1;
    this->ReflexMode = EPalReflexMode::On;
    this->MaxFPS = 60.00f;
    this->ScreenPercentage = 75;
    this->bArachnophobiaMode = false;
    this->bShowFriendPalAura = true;
    this->bUseVerticalFOV = false;
}

