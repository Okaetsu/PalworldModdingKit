#include "PalNetworkPlayerComponent.h"

UPalNetworkPlayerComponent::UPalNetworkPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkPlayerComponent::ShowUnlockHardModeUI_ToClient_Implementation() {
}

void UPalNetworkPlayerComponent::ShowExpeditionBonusExpReward_ToClient_Implementation(int32 RewardExp) {
}

void UPalNetworkPlayerComponent::ShowDefeatBossBonusExpReward_ToClient_Implementation(int32 RewardExp) {
}

void UPalNetworkPlayerComponent::ShowCaptureCompletionRelicReward_ToClient_Implementation(EPalRelicType RelicType, const FName& CharacterID) {
}

void UPalNetworkPlayerComponent::ShowBossDefeatRewardUI_ToClient_Implementation(const FPalUIBossDefeatRewardDisplayData& BossDefeatDisplayData, bool AfterTeleport, int32 DelayTime) {
}

void UPalNetworkPlayerComponent::SetCurrentSelectPalSphereIndex_ToServer_Implementation(int32 NextIndex, UPalLoadoutSelectorComponent* LoadoutSelector) {
}

void UPalNetworkPlayerComponent::RequestUpdatePlayerSettingsForServer_ToServer_Implementation(const FPalPlayerSettingsForServer& NewSettings) {
}

void UPalNetworkPlayerComponent::RequestUnlockTechnology_ToServer_Implementation(const FName& UnlockTechnologyName) {
}

void UPalNetworkPlayerComponent::RequestUnlockFastTravelPoint_ToServer_Implementation(const FName UnlockFlagKey) {
}

void UPalNetworkPlayerComponent::RequestTriggerTutorial_ToClient_Implementation(EPalTutorialTriggerConditionType TriggerConditionType) {
}

void UPalNetworkPlayerComponent::RequestSortInventory_ToServer_Implementation() {
}

void UPalNetworkPlayerComponent::RequestSetReplicationEntity_ToServer_Implementation(const EPalPlayerReplicationEntityType EntityType, const bool bReplicate) {
}

void UPalNetworkPlayerComponent::RequestSendMessageToCurrentStage_ToServer_Implementation(const FPalStageRequestMessage& Message) {
}

void UPalNetworkPlayerComponent::RequestPlayerPassiveEffectTriggered_ToServer_Implementation(EPalStatusID statusID, FPalPassiveEffectTriggerInfo TriggerInfo) {
}

void UPalNetworkPlayerComponent::RequestPlayerPassiveEffectTriggered(EPalStatusID statusID, FPalPassiveEffectTriggerInfo TriggerInfo) {
}

void UPalNetworkPlayerComponent::RequestPickupTreasureMapPoint_ToServer_Implementation(const FGuid& TargetLevelInstanceId) {
}

void UPalNetworkPlayerComponent::RequestPalStorageReplicates_ToServer_Implementation(const FPalInstanceID& IndividualId, const FName Key, const bool bReplicate) {
}

void UPalNetworkPlayerComponent::RequestPalStorageReplicates(const UObject* WorldContextObject, const FPalInstanceID& IndividualId, const FName Key, const bool bReplicate) {
}

void UPalNetworkPlayerComponent::RequestOpenEnemyCampCage_Implementation(APalCapturedCage* TargetCage) {
}

void UPalNetworkPlayerComponent::RequestObtainLevelObject_ToServer_Implementation(APalLevelObjectObtainable* TargetObject) {
}

void UPalNetworkPlayerComponent::RequestMoveItemToInventoryFromSlot_Implementation(UPalItemSlot* fromSlot, bool IsTryEquip) {
}

void UPalNetworkPlayerComponent::RequestMoveItemToInventoryFromContainer_Implementation(UPalItemContainer* fromContainer, bool IsTryEquip) {
}

void UPalNetworkPlayerComponent::RequestMiniGameSuccess_ToServer_Implementation(const TScriptInterface<IPalInteractableLevelObjectInterface>& Interface) {
}

void UPalNetworkPlayerComponent::RequestInteractLevelObjectWithParameter_ToServer_Implementation(const TScriptInterface<IPalInteractableLevelObjectInterface>& TargetObject, const FPalNetArchive& Archive) {
}

void UPalNetworkPlayerComponent::RequestInteractLevelObject_ToServer_Implementation(const TScriptInterface<IPalInteractableLevelObjectInterface>& TargetObject) {
}

void UPalNetworkPlayerComponent::RequestExitStage_ToServer_Implementation(const FPalStageExitParameter Parameter) {
}

void UPalNetworkPlayerComponent::RequestEnterStage_ToServer_Implementation(const FPalStageInstanceId& StageInstanceId) {
}

void UPalNetworkPlayerComponent::RequestDropOtomoPal_ToServer_Implementation(const int32 OtomoIndex) {
}

void UPalNetworkPlayerComponent::RequestChangeVoiceID_ToServer_Implementation(int32 NewVoiceID) {
}

void UPalNetworkPlayerComponent::RequestChangePlayerLanternSetting_Implementation(const FPalPlayerDataEquipLanternData& NewLanternSettings) {
}

void UPalNetworkPlayerComponent::RequestCancelSalvageAction_ToServer_Implementation() {
}

void UPalNetworkPlayerComponent::RequestBuild_ToServer_Implementation(const FName BuildObjectId, const FVector& Location, const FQuat& Rotation, const TArray<FPalNetArchive>& ExtraParameterArchives, FPalBuildRequestDebugParameter DebugParameter) {
}

void UPalNetworkPlayerComponent::RequestAddTechnolgyPointByItem_ToServer_Implementation(const FPalItemSlotId& ConsumeItemSlotID) {
}

void UPalNetworkPlayerComponent::RequestAddRecord_NormalBossDefeatAll_ToServer_Implementation() {
}

void UPalNetworkPlayerComponent::RequestAddItem_ToServer_Implementation(const FName StaticItemId, const int32 Count, bool IsAssignPassive) {
}

void UPalNetworkPlayerComponent::RequestAddBossTechnolgyPointByItem_ToServer_Implementation(const FPalItemSlotId& ConsumeItemSlotID) {
}

void UPalNetworkPlayerComponent::RegisterRespawnPoint_ToServer_Implementation(const FGuid& PlayerUId, const FVector& Location, const FQuat& Rotation) {
}

void UPalNetworkPlayerComponent::ReceiveSuccessPickupTreasureMapPoint_ToClient_Implementation(APalTreasureMapInteractivePoint* TargetInteractivePoint) {
}

void UPalNetworkPlayerComponent::ReceiveSuccessOpenEnemyCampCage_Implementation(APalCapturedCage* TargetCage) {
}

void UPalNetworkPlayerComponent::ReceiveRequestSendMessageToCurrentStageResult_ToRequestClient_Implementation(const EPalStageRequestResult Result) {
}

void UPalNetworkPlayerComponent::ReceiveExitStageRequestResult_ToRequestClient_Implementation(const EPalStageRequestResult Result) {
}

void UPalNetworkPlayerComponent::ReceiveEnterStageRequestResult_ToRequestClient_Implementation(const FPalStageInstanceId& StageInstanceId, const EPalStageRequestResult Result) {
}

void UPalNetworkPlayerComponent::NotifyWildlifeSanctuaryAntiAirWarning_ToClient_Implementation(bool bIsShow, const FGuid& PreserveID) {
}

void UPalNetworkPlayerComponent::NotifyWarpPointPerformanceComplete_Server_Implementation(APalLevelObjectWarpPointToLocation* WarpPoint, APalPlayerCharacter* PlayerCharacter) {
}

void UPalNetworkPlayerComponent::NotifyUnlockAchievement_ToClient_Implementation(const FString& AchievementId) {
}

void UPalNetworkPlayerComponent::NotifyStartCrime_ToClient_Implementation(FGuid CrimeInstanceId) {
}

void UPalNetworkPlayerComponent::NotifyReportDroneFound_ToClient_Implementation() {
}

void UPalNetworkPlayerComponent::NotifyReportCriminal_ToClient_Implementation(const FPalInstanceID& IndividualId, const TArray<FName>& CrimeIds) {
}

void UPalNetworkPlayerComponent::NotifyReleaseWanted_ToClient_Implementation(UPalIndividualCharacterHandle* CriminalHandle) {
}

void UPalNetworkPlayerComponent::NotifyRaidBossEnd_ToClient_Implementation(const FGuid CampID, const EPalRaidBossBattleFinishType FinishType) {
}

void UPalNetworkPlayerComponent::NotifyPoliceInSight_ToClient_Implementation(bool IsInSight, bool IsWanted) {
}

void UPalNetworkPlayerComponent::NotifyPoliceAlertState_ToClient_Implementation(bool IsAlerted, bool IsFound, float DiscoveryGaugeNormalized, float DiscoveryGaugeRatePerSec, bool IsWanted) {
}

void UPalNetworkPlayerComponent::NotifyEndCrime_ToClient_Implementation(FGuid CrimeInstanceId) {
}

void UPalNetworkPlayerComponent::NotifyDimensionalDistortionContactConfirmed_ToServer_Implementation(APalDimensionalDistortionPawn* DistortionPawn, APalPlayerCharacter* TargetPlayerCharacter) {
}

void UPalNetworkPlayerComponent::NotifyClientInitializedEssential_ToServer_Implementation() {
}

void UPalNetworkPlayerComponent::NotifyChangedWantedLevel_ToClient_Implementation(int32 WantedLevel) {
}

void UPalNetworkPlayerComponent::NotifyBaseCampRaidStarted_ToClient_Implementation(const FGuid& BaseCampId) {
}

void UPalNetworkPlayerComponent::MulticastPlayerPassiveEffectTriggered_Implementation(APalCharacter* TargetCharacter, EPalStatusID statusID, FPalPassiveEffectTriggerInfo TriggerInfo, int32 issuerID) {
}

void UPalNetworkPlayerComponent::LoadoutSelectorRemoveEquipItem_Implementation(UPalLoadoutSelectorComponent* LoadoutSelector) {
}

void UPalNetworkPlayerComponent::LoadoutSelectorEquipItem_Implementation(UPalLoadoutSelectorComponent* LoadoutSelector, EPalPlayerInventoryType inventoryType, int32 Index) {
}

void UPalNetworkPlayerComponent::FlushPendingExpeditionBonusExpReward(bool bIsSkipped) {
}

void UPalNetworkPlayerComponent::ExecuteWarpPointPerformance_Client_Implementation(APalLevelObjectWarpPointToLocation* WarpPoint, APalPlayerCharacter* PlayerCharacter) {
}

void UPalNetworkPlayerComponent::Dev_TeleportToRelativeLocationInStageLevel_ToServer_Implementation(const FVector RelativeLocation) {
}

void UPalNetworkPlayerComponent::Dev_SetOverridePlayerUID_ToServer_Implementation(const FGuid& PlayerUId) {
}

void UPalNetworkPlayerComponent::Dev_SetOverridePlayerUID_ToClient_Implementation(const FGuid& PlayerUId) {
}

void UPalNetworkPlayerComponent::Dev_SetEnablePlayerRespawnInHardcore_Implementation(bool bEnable) {
}

void UPalNetworkPlayerComponent::Dev_RequestTeleportToDungeonEntranceByIndex_ToServer_Implementation(const int32 Index) {
}

void UPalNetworkPlayerComponent::Dev_RequestTeleportToDungeonEntranceByDataLayer_ToServer_Implementation(const FName DataLayerName) {
}

void UPalNetworkPlayerComponent::Dev_RequestTeleportToCurrentDungeonTreasureBox_ToServer_Implementation() {
}

void UPalNetworkPlayerComponent::Dev_RequestTeleportToCurrentDungeonGoal_ToServer_Implementation() {
}

void UPalNetworkPlayerComponent::Dev_RequestTeleportToBossTower_ToServer_Implementation(EPalBossType BossType) {
}

void UPalNetworkPlayerComponent::Dev_RequestEnterPlayerGuildBaseCampBelongTo_ToServer_Implementation(const FGuid& BaseCampId) {
}

void UPalNetworkPlayerComponent::Dev_RequestEnterDungeonByDataLayer_ToServer_Implementation(const FName DataLayerName) {
}

void UPalNetworkPlayerComponent::Dev_ForceRespawnSpawnerTarget_ToServer_Implementation(const FVector& SpawnerLocation) {
}

void UPalNetworkPlayerComponent::Dev_ForceRespawnNearSpawners_ToServer_Implementation(const FVector& PlayerLocation, float RadiusCM) {
}

void UPalNetworkPlayerComponent::Dev_ForceRespawnNearItemSpawners_ToServer_Implementation(const FVector& PlayerLocation, float RadiusCM) {
}

void UPalNetworkPlayerComponent::Dev_ForceFoundNearestTreasureMapPoint_ToServer_Implementation(const int32 Rarity) {
}


