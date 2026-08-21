#include "PalOptionWorldPresetRow.h"

FPalOptionWorldPresetRow::FPalOptionWorldPresetRow() {
    this->Diffculty = EPalOptionWorldDifficulty::None;
    this->RandomizerType = EPalRandomizerType::None;
    this->DayTimeSpeedRate = 1.00f;
    this->NightTimeSpeedRate = 1.00f;
    this->ExpRate = 1.00f;
    this->PalCaptureRate = 1.00f;
    this->PalSpawnNumRate = 1.00f;
    this->PalDamageRateAttack = 1.00f;
    this->PalDamageRateDefense = 1.00f;
    this->PlayerDamageRateAttack = 1.00f;
    this->PlayerDamageRateDefense = 1.00f;
    this->PlayerStomachDecreaceRate = 1.00f;
    this->PlayerStaminaDecreaceRate = 1.00f;
    this->PlayerAutoHPRegeneRate = 1.00f;
    this->PlayerAutoHpRegeneRateInSleep = 1.00f;
    this->PalStomachDecreaceRate = 1.00f;
    this->PalStaminaDecreaceRate = 1.00f;
    this->PalAutoHPRegeneRate = 1.00f;
    this->PalAutoHpRegeneRateInSleep = 1.00f;
    this->BuildObjectHpRate = 1.00f;
    this->BuildObjectDamageRate = 1.00f;
    this->BuildObjectDeteriorationDamageRate = 1.00f;
    this->CollectionDropRate = 1.00f;
    this->CollectionObjectHpRate = 1.00f;
    this->CollectionObjectRespawnSpeedRate = 1.00f;
    this->EnemyDropItemRate = 1.00f;
    this->DeathPenalty = EPalOptionWorldDeathPenalty::Item;
    this->bActiveUNKO = false;
    this->DropItemMaxNum_UNKO = 0;
    this->bEnableInvaderEnemy = true;
    this->DropItemMaxNum = 3000;
    this->PhysicsActiveDropItemMaxNum = -1;
    this->bAutoResetGuildNoOnlinePlayers = true;
    this->AutoResetGuildTimeNoOnlinePlayers = 72.00f;
    this->GuildPlayerMaxNum = 20;
    this->PalEggDefaultHatchingTime = 1.00f;
    this->BaseCampWorkerMaxNum = 15;
    this->SupplyDropSpan = 180;
    this->bHardcore = false;
    this->bPalLost = false;
    this->bAllowGlobalPalboxExport = true;
    this->bAllowGlobalPalboxImport = true;
    this->AutoTransferMasterCheckIntervalSeconds = 3600.00f;
    this->AutoTransferMasterThresholdDays = 14;
    this->GuildRejoinCooldownMinutes = 0;
    this->MaxGuildsPerFrame = 10;
}

