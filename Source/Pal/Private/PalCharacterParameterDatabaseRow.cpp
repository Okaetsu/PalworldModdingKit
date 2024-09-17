#include "PalCharacterParameterDatabaseRow.h"

FPalCharacterParameterDatabaseRow::FPalCharacterParameterDatabaseRow() {
    this->IsPal = false;
    this->Tribe = EPalTribeID::None;
    this->ZukanIndex = 0;
    this->Size = EPalSizeType::None;
    this->Rarity = 0;
    this->ElementType1 = EPalElementType::None;
    this->ElementType2 = EPalElementType::None;
    this->GenusCategory = EPalGenusCategoryType::None;
    this->Organization = EPalOrganizationType::None;
    this->Weapon = EPalWeaponType::None;
    this->WeaponEquip = false;
    this->Hp = 0;
    this->MeleeAttack = 0;
    this->ShotAttack = 0;
    this->Defense = 0;
    this->Support = 0;
    this->CraftSpeed = 0;
    this->EnemyMaxHPRate = 0.00f;
    this->EnemyReceiveDamageRate = 0.00f;
    this->EnemyInflictDamageRate = 0.00f;
    this->CaptureRateCorrect = 0.00f;
    this->ExpRatio = 0.00f;
    this->Price = 0.00f;
    this->StatusResistUpRate = 0.00f;
    this->SlowWalkSpeed = 0;
    this->WalkSpeed = 0;
    this->RunSpeed = 0;
    this->RideSprintSpeed = 0;
    this->TransportSpeed = 0;
    this->IsBoss = false;
    this->IsTowerBoss = false;
    this->IsRaidBoss = false;
    this->UseBossHPGauge = false;
    this->BattleBGM = EPalBattleBGMType::None;
    this->IgnoreLeanBack = false;
    this->IgnoreBlowAway = false;
    this->MaxFullStomach = 0;
    this->FullStomachDecreaseRate = 0.00f;
    this->FoodAmount = 0;
    this->ViewingDistance = 0;
    this->ViewingAngle = 0;
    this->HearingRate = 0.00f;
    this->NooseTrap = false;
    this->Nocturnal = false;
    this->BiologicalGrade = 0;
    this->Predator = false;
    this->Edible = false;
    this->Stamina = 0;
    this->MaleProbability = 0;
    this->CombiRank = 0;
    this->WorkSuitability_EmitFlame = 0;
    this->WorkSuitability_Watering = 0;
    this->WorkSuitability_Seeding = 0;
    this->WorkSuitability_GenerateElectricity = 0;
    this->WorkSuitability_Handcraft = 0;
    this->WorkSuitability_Collection = 0;
    this->WorkSuitability_Deforest = 0;
    this->WorkSuitability_Mining = 0;
    this->WorkSuitability_OilExtraction = 0;
    this->WorkSuitability_ProductMedicine = 0;
    this->WorkSuitability_Cool = 0;
    this->WorkSuitability_Transport = 0;
    this->WorkSuitability_MonsterFarm = 0;
}

