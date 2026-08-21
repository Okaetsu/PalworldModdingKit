#include "PalMakeDamageInfo.h"

FPalMakeDamageInfo::FPalMakeDamageInfo() {
    this->Attacker = NULL;
    this->Defender = NULL;
    this->HitComponent = NULL;
    this->Power = 100;
    this->Category = EPalWazaCategory::Shot;
    this->Element = EPalElementType::None;
    this->AttackType = EPalAttackType::Waza;
    this->WeaponType = EPalWeaponType::None;
    this->IsLeanBack = false;
    this->IsBlow = false;
    this->HumanStunType = EPalHumanStunType::None;
    this->EffectType1 = EPalAdditionalEffectType::None;
    this->EffectValue1 = 0;
    this->EffectValueEx1 = 0.00f;
    this->EffectType2 = EPalAdditionalEffectType::None;
    this->EffectValue2 = 0;
    this->EffectValueEx2 = 0.00f;
    this->SneakAttackRate = 1.00f;
    this->DamageRatePerCollision = 1.00f;
    this->PvPBuildingDamageRate = 1.00f;
    this->PvPPlayerToGuildPalDamageRate = 1.00f;
    this->CollectionObjectDamageRate = 1.00f;
    this->DamageReactionAnimationType = EPalDamageAnimationReactionType::Big;
    this->bAttackableToFriend = false;
    this->NoDamage = false;
    this->IgnoreShield = false;
    this->UIDamageTextOverride_DoubleRegist = false;
    this->CameraShake = EPalPlayerDamageCameraShakeCategory::None;
    this->ForceRagdollSize = EPalSizeType::None;
    this->OverrideNetworkOwner = NULL;
    this->WeaponDamageRatePvP = 1.00f;
    this->bIsExplosionDamage = false;
    this->bCannotKill = false;
    this->bIsLastBullet = false;
    this->bIsPartnerSkillAttackBullet = false;
}

