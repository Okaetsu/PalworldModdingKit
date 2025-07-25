#include "PalOptionWorldSettings.h"

FPalOptionWorldSettings::FPalOptionWorldSettings() {
    this->Difficulty = EPalOptionWorldDifficulty::None;
    this->RandomizerType = EPalRandomizerType::None;
    this->bIsRandomizerPalLevelRandom = false;
    this->DayTimeSpeedRate = 0.00f;
    this->NightTimeSpeedRate = 0.00f;
    this->ExpRate = 0.00f;
    this->PalCaptureRate = 0.00f;
    this->PalSpawnNumRate = 0.00f;
    this->PalDamageRateAttack = 0.00f;
    this->PalDamageRateDefense = 0.00f;
    this->PlayerDamageRateAttack = 0.00f;
    this->PlayerDamageRateDefense = 0.00f;
    this->PlayerStomachDecreaceRate = 0.00f;
    this->PlayerStaminaDecreaceRate = 0.00f;
    this->PlayerAutoHPRegeneRate = 0.00f;
    this->PlayerAutoHpRegeneRateInSleep = 0.00f;
    this->PalStomachDecreaceRate = 0.00f;
    this->PalStaminaDecreaceRate = 0.00f;
    this->PalAutoHPRegeneRate = 0.00f;
    this->PalAutoHpRegeneRateInSleep = 0.00f;
    this->BuildObjectHpRate = 0.00f;
    this->BuildObjectDamageRate = 0.00f;
    this->BuildObjectDeteriorationDamageRate = 0.00f;
    this->CollectionDropRate = 0.00f;
    this->CollectionObjectHpRate = 0.00f;
    this->CollectionObjectRespawnSpeedRate = 0.00f;
    this->EnemyDropItemRate = 0.00f;
    this->DeathPenalty = EPalOptionWorldDeathPenalty::None;
    this->bEnablePlayerToPlayerDamage = false;
    this->bEnableFriendlyFire = false;
    this->bEnableInvaderEnemy = false;
    this->bActiveUNKO = false;
    this->bEnableAimAssistPad = false;
    this->bEnableAimAssistKeyboard = false;
    this->DropItemMaxNum = 0;
    this->DropItemMaxNum_UNKO = 0;
    this->BaseCampMaxNum = 0;
    this->BaseCampWorkerMaxNum = 0;
    this->DropItemAliveMaxHours = 0.00f;
    this->bAutoResetGuildNoOnlinePlayers = false;
    this->AutoResetGuildTimeNoOnlinePlayers = 0.00f;
    this->GuildPlayerMaxNum = 0;
    this->BaseCampMaxNumInGuild = 0;
    this->PalEggDefaultHatchingTime = 0.00f;
    this->WorkSpeedRate = 0.00f;
    this->autoSaveSpan = 0.00f;
    this->bIsMultiplay = false;
    this->bIsPvP = false;
    this->bHardcore = false;
    this->bPalLost = false;
    this->bCharacterRecreateInHardcore = false;
    this->bCanPickupOtherGuildDeathPenaltyDrop = false;
    this->bEnableNonLoginPenalty = false;
    this->bEnableFastTravel = false;
    this->bIsStartLocationSelectByMap = false;
    this->bExistPlayerAfterLogout = false;
    this->bEnableDefenseOtherGuildPlayer = false;
    this->bInvisibleOtherGuildBaseCampAreaFX = false;
    this->bBuildAreaLimit = false;
    this->ItemWeightRate = 0.00f;
    this->CoopPlayerMaxNum = 0;
    this->ServerPlayerMaxNum = 0;
    this->PublicPort = 0;
    this->RCONEnabled = false;
    this->RCONPort = 0;
    this->bUseAuth = false;
    this->RESTAPIEnabled = false;
    this->RESTAPIPort = 0;
    this->bShowPlayerList = false;
    this->ChatPostLimitPerMinute = 0;
    this->bIsUseBackupSaveData = false;
    this->LogFormatType = EPalLogFormatType::Text;
    this->SupplyDropSpan = 0;
    this->EnablePredatorBossPal = false;
    this->MaxBuildingLimitNum = 0;
    this->ServerReplicatePawnCullDistance = 0.00f;
    this->bAllowGlobalPalboxExport = false;
    this->bAllowGlobalPalboxImport = false;
    this->EquipmentDurabilityDamageRate = 0.00f;
    this->ItemContainerForceMarkDirtyInterval = 0.00f;
    this->bIsForceEnableRandomizerPalLevelRandom_ForUI = false;
}

