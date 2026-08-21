#include "PalWazaDatabaseRaw.h"

FPalWazaDatabaseRaw::FPalWazaDatabaseRaw() {
    this->WazaType = EPalWazaID::None;
    this->Element = EPalElementType::None;
    this->IgnoreRandomInherit = false;
    this->Category = EPalWazaCategory::Shot;
    this->Power = 1;
    this->DisplayPower = 1;
    this->IsLeanBack = false;
    this->CameraShake = EPalPlayerDamageCameraShakeCategory::Waza_M;
    this->IgnoreRaycast = false;
    this->MinRange = 0;
    this->MaxRange = 9999;
    this->MaxHeightDiff = 9999;
    this->CoolTime = 1.00f;
    this->ForceRagdollSize = EPalSizeType::None;
    this->EffectType1 = EPalAdditionalEffectType::None;
    this->EffectValue1 = 0;
    this->EffectValueEx1 = 0.00f;
    this->EffectType2 = EPalAdditionalEffectType::None;
    this->EffectValue2 = 0;
    this->EffectValueEx2 = 0.00f;
    this->bIsWeaponDamage = false;
    this->bIsExplosionDamage = false;
    this->DisabledData = false;
    this->Strength = EPalWazaStrength::None;
    this->BulletEmiiterOverlapClass = NULL;
}

