#include "PalArenaSpectateSpringArmParameter.h"

FPalArenaSpectateSpringArmParameter::FPalArenaSpectateSpringArmParameter() {
    this->bEnableCameraLag = true;
    this->bEnableCameraRotationLag = true;
    this->CameraLagSpeed = 10.00f;
    this->CameraRotationLagSpeed = 10.00f;
}

