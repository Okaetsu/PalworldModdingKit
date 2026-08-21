#include "PalDamageInfo.h"

FPalDamageInfo::FPalDamageInfo() {
    this->NativeDamageValue = 0;
    this->BasePower = 0;
    this->RedirectDamageValue = 0;
    this->Category = EPalWazaCategory::Shot;
    this->IsBlowAttack = false;
    this->IsLeanBack = false;
    this->BodyPartsType = EPalBodyPartsType::Normal;
    this->AttackerLevel = 0;
    this->AttackElementType = EPalElementType::None;
    this->Attacker = NULL;
    this->OverrideNetworkOwner = NULL;
    this->AttackType = EPalAttackType::Waza;
    this->WeaponType = EPalWeaponType::None;
    this->EffectType1 = EPalAdditionalEffectType::None;
    this->EffectValue1 = 0;
    this->EffectValueEx1 = 0.00f;
    this->EffectType2 = EPalAdditionalEffectType::None;
    this->EffectValue2 = 0;
    this->EffectValueEx2 = 0.00f;
    this->SneakAttackRate = 1.00f;
    this->PlaySneakAttackEffect = false;
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
    this->bApplyNativeDamageValue = false;
    this->IgnorePlayerEquipItemDamage = false;
    this->IgnoreCheckGroupForStun = false;
    this->IsPlayerVsPlayerDamage = false;
    this->WeaponDamageRatePvP = 1.00f;
    this->statusID = EPalStatusID::None;
    this->bRedirectDamage = false;
    this->IgnoreCanProcessDamage = false;
    this->HumanStunType = EPalHumanStunType::None;
    this->bIsExplosionDamage = false;
    this->bCannotKill = false;
    this->bIsLastBullet = false;
    this->bIsPartnerSkillAttackBullet = false;
}

