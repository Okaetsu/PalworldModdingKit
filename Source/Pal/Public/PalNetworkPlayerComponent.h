#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalBossType.h"
#include "EPalPlayerInventoryType.h"
#include "EPalPlayerReplicationEntityType.h"
#include "EPalRaidBossBattleFinishType.h"
#include "EPalRelicType.h"
#include "EPalStageRequestResult.h"
#include "EPalStatusID.h"
#include "EPalTutorialTriggerConditionType.h"
#include "PalBuildRequestDebugParameter.h"
#include "PalInstanceID.h"
#include "PalItemSlotId.h"
#include "PalNetArchive.h"
#include "PalPassiveEffectTriggerInfo.h"
#include "PalPlayerDataEquipLanternData.h"
#include "PalPlayerSettingsForServer.h"
#include "PalStageExitParameter.h"
#include "PalStageInstanceId.h"
#include "PalStageRequestMessage.h"
#include "PalUIBossDefeatRewardDisplayData.h"
#include "PalNetworkPlayerComponent.generated.h"

class APalCapturedCage;
class APalCharacter;
class APalDimensionalDistortionPawn;
class APalLevelObjectObtainable;
class APalLevelObjectWarpPointToLocation;
class APalPlayerCharacter;
class APalTreasureMapInteractivePoint;
class IPalInteractableLevelObjectInterface;
class UPalInteractableLevelObjectInterface;
class UObject;
class UPalIndividualCharacterHandle;
class UPalItemContainer;
class UPalItemSlot;
class UPalLoadoutSelectorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkPlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ShowUnlockHardModeUI_ToClient();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ShowExpeditionBonusExpReward_ToClient(int32 RewardExp);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ShowDefeatBossBonusExpReward_ToClient(int32 RewardExp);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ShowCaptureCompletionRelicReward_ToClient(EPalRelicType RelicType, const FName& CharacterID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ShowBossDefeatRewardUI_ToClient(const FPalUIBossDefeatRewardDisplayData& BossDefeatDisplayData, bool AfterTeleport, int32 DelayTime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetCurrentSelectPalSphereIndex_ToServer(int32 NextIndex, UPalLoadoutSelectorComponent* LoadoutSelector);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestUpdatePlayerSettingsForServer_ToServer(const FPalPlayerSettingsForServer& NewSettings);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestUnlockTechnology_ToServer(const FName& UnlockTechnologyName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestUnlockFastTravelPoint_ToServer(const FName UnlockFlagKey);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RequestTriggerTutorial_ToClient(EPalTutorialTriggerConditionType TriggerConditionType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSortInventory_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSetReplicationEntity_ToServer(const EPalPlayerReplicationEntityType EntityType, const bool bReplicate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSendMessageToCurrentStage_ToServer(const FPalStageRequestMessage& Message);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestPlayerPassiveEffectTriggered_ToServer(EPalStatusID statusID, FPalPassiveEffectTriggerInfo TriggerInfo);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayerPassiveEffectTriggered(EPalStatusID statusID, FPalPassiveEffectTriggerInfo TriggerInfo);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestPickupTreasureMapPoint_ToServer(const FGuid& TargetLevelInstanceId);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestPalStorageReplicates_ToServer(const FPalInstanceID& IndividualId, const FName Key, const bool bReplicate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestPalStorageReplicates(const UObject* WorldContextObject, const FPalInstanceID& IndividualId, const FName Key, const bool bReplicate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestOpenEnemyCampCage(APalCapturedCage* TargetCage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestObtainLevelObject_ToServer(APalLevelObjectObtainable* TargetObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestMoveItemToInventoryFromSlot(UPalItemSlot* fromSlot, bool IsTryEquip);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestMoveItemToInventoryFromContainer(UPalItemContainer* fromContainer, bool IsTryEquip);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestMiniGameSuccess_ToServer(const TScriptInterface<IPalInteractableLevelObjectInterface>& Interface);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestInteractLevelObjectWithParameter_ToServer(const TScriptInterface<IPalInteractableLevelObjectInterface>& TargetObject, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestInteractLevelObject_ToServer(const TScriptInterface<IPalInteractableLevelObjectInterface>& TargetObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestExitStage_ToServer(const FPalStageExitParameter Parameter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestEnterStage_ToServer(const FPalStageInstanceId& StageInstanceId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDropOtomoPal_ToServer(const int32 OtomoIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeVoiceID_ToServer(int32 NewVoiceID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangePlayerLanternSetting(const FPalPlayerDataEquipLanternData& NewLanternSettings);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestCancelSalvageAction_ToServer();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestBuild_ToServer(const FName BuildObjectId, const FVector& Location, const FQuat& Rotation, const TArray<FPalNetArchive>& ExtraParameterArchives, FPalBuildRequestDebugParameter DebugParameter);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestAddTechnolgyPointByItem_ToServer(const FPalItemSlotId& ConsumeItemSlotID);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestAddRecord_NormalBossDefeatAll_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestAddItem_ToServer(const FName StaticItemId, const int32 Count, bool IsAssignPassive);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestAddBossTechnolgyPointByItem_ToServer(const FPalItemSlotId& ConsumeItemSlotID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RegisterRespawnPoint_ToServer(const FGuid& PlayerUId, const FVector& Location, const FQuat& Rotation);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveSuccessPickupTreasureMapPoint_ToClient(APalTreasureMapInteractivePoint* TargetInteractivePoint);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveSuccessOpenEnemyCampCage(APalCapturedCage* TargetCage);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveRequestSendMessageToCurrentStageResult_ToRequestClient(const EPalStageRequestResult Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveExitStageRequestResult_ToRequestClient(const EPalStageRequestResult Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveEnterStageRequestResult_ToRequestClient(const FPalStageInstanceId& StageInstanceId, const EPalStageRequestResult Result);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyWildlifeSanctuaryAntiAirWarning_ToClient(bool bIsShow, const FGuid& PreserveID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyWarpPointPerformanceComplete_Server(APalLevelObjectWarpPointToLocation* WarpPoint, APalPlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyUnlockAchievement_ToClient(const FString& AchievementId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyStartCrime_ToClient(FGuid CrimeInstanceId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyReportDroneFound_ToClient();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyReportCriminal_ToClient(const FPalInstanceID& IndividualId, const TArray<FName>& CrimeIds);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyReleaseWanted_ToClient(UPalIndividualCharacterHandle* CriminalHandle);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyRaidBossEnd_ToClient(const FGuid CampID, const EPalRaidBossBattleFinishType FinishType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyPoliceInSight_ToClient(bool IsInSight, bool IsWanted);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyPoliceAlertState_ToClient(bool IsAlerted, bool IsFound, float DiscoveryGaugeNormalized, float DiscoveryGaugeRatePerSec, bool IsWanted);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyEndCrime_ToClient(FGuid CrimeInstanceId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyDimensionalDistortionContactConfirmed_ToServer(APalDimensionalDistortionPawn* DistortionPawn, APalPlayerCharacter* TargetPlayerCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyClientInitializedEssential_ToServer();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyChangedWantedLevel_ToClient(int32 WantedLevel);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyBaseCampRaidStarted_ToClient(const FGuid& BaseCampId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayerPassiveEffectTriggered(APalCharacter* TargetCharacter, EPalStatusID statusID, FPalPassiveEffectTriggerInfo TriggerInfo, int32 issuerID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void LoadoutSelectorRemoveEquipItem(UPalLoadoutSelectorComponent* LoadoutSelector);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void LoadoutSelectorEquipItem(UPalLoadoutSelectorComponent* LoadoutSelector, EPalPlayerInventoryType inventoryType, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void FlushPendingExpeditionBonusExpReward(bool bIsSkipped);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ExecuteWarpPointPerformance_Client(APalLevelObjectWarpPointToLocation* WarpPoint, APalPlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_TeleportToRelativeLocationInStageLevel_ToServer(const FVector RelativeLocation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_SetOverridePlayerUID_ToServer(const FGuid& PlayerUId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Dev_SetOverridePlayerUID_ToClient(const FGuid& PlayerUId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_SetEnablePlayerRespawnInHardcore(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_RequestTeleportToDungeonEntranceByIndex_ToServer(const int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_RequestTeleportToDungeonEntranceByDataLayer_ToServer(const FName DataLayerName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_RequestTeleportToCurrentDungeonTreasureBox_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_RequestTeleportToCurrentDungeonGoal_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_RequestTeleportToBossTower_ToServer(EPalBossType BossType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_RequestEnterPlayerGuildBaseCampBelongTo_ToServer(const FGuid& BaseCampId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_RequestEnterDungeonByDataLayer_ToServer(const FName DataLayerName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_ForceRespawnSpawnerTarget_ToServer(const FVector& SpawnerLocation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_ForceRespawnNearSpawners_ToServer(const FVector& PlayerLocation, float RadiusCM);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_ForceRespawnNearItemSpawners_ToServer(const FVector& PlayerLocation, float RadiusCM);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_ForceFoundNearestTreasureMapPoint_ToServer(const int32 Rarity);
    
};

