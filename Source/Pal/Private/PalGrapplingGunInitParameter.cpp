#include "PalGrapplingGunInitParameter.h"

FPalGrapplingGunInitParameter::FPalGrapplingGunInitParameter() {
    this->CableShootSpeed = 8000.00f;
    this->CableReturnSpeed = 12000.00f;
    this->CableMaxLength = 2100.00f;
    this->CharacterMoveSpeed = 4000.00f;
    this->NearCoolTimeDistance = 400.00f;
    this->NearCoolTimeRate = 0.20f;
    this->ActionCharacter = NULL;
}

