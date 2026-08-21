#include "PalPlayerDamageCameraShakeData.h"

FPalPlayerDamageCameraShakeData::FPalPlayerDamageCameraShakeData() {
    this->Category = EPalPlayerDamageCameraShakeCategory::Waza_S;
    this->Scale_Min = 0.20f;
    this->Scale_Default = 1.00f;
    this->Scale_Max = 2.00f;
    this->HPRate_Min = 5;
    this->HPRate_Default = 25;
    this->HPRate_Max = 70;
}

