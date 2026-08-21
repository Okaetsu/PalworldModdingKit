#include "PalDamageResult.h"

FPalDamageResult::FPalDamageResult() {
    this->Damage = 0;
    this->Attacker = NULL;
    this->Defender = NULL;
    this->DamageReactionAnimationType = EPalDamageAnimationReactionType::Big;
    this->IgnoreShield = false;
    this->IsPlayedLeanBack = false;
    this->CameraShake = EPalPlayerDamageCameraShakeCategory::None;
    this->IgnorePlayerEquipItemDamage = false;
    this->AttackElementType = EPalElementType::None;
    this->WeaponType = EPalWeaponType::None;
    this->ActualDamage = 0;
    this->BodyPartsType = EPalBodyPartsType::Normal;
    this->bCannotKill = false;
    this->BasePower = 0;
}

