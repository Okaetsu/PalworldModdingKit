#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "BoolValUpdateDelegateDelegate.h"
#include "EPalRelicType.h"
#include "PalPlayerRecordDataFoundTreasureMapPoint.h"
#include "PalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal.h"
#include "PalPlayerRecordDataRepInfoArrayThreadSafe_IntVal.h"
#include "PalRelicPossessNumArray.h"
#include "PalStageInstanceId.h"
#include "ThreadSafeBoolean.h"
#include "ThreadSafeInt32.h"
#include "PalPlayerRecordData.generated.h"

class UPalMapObjectModel;
class UPalPlayerRecordDataTrigger;

UCLASS(Blueprintable)
class PAL_API UPalPlayerRecordData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateTreasureMapPointDelegate, const FGuid&, PointId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateTreasureMapPointDataDelegate, const FGuid&, PointId, const FPalPlayerRecordDataFoundTreasureMapPoint&, PointData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRelicNumUpdateDelegate, EPalRelicType, Type, int32, NewNum);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRelicNumAddedByTypeDelegate, EPalRelicType, Type, int32, AddNum);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnteringStageInstanceIdUpdateDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRelicNumUpdateDelegate OnRelicNumUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRelicNumAddedByTypeDelegate OnRelicNumAddByType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnteringStageInstanceIdUpdateDelegate OnEnteringStageInstanceIdUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolValUpdateDelegate OnTowerBossDefeatFlagUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UPalPlayerRecordDataTrigger>> RecordDataTriggerClassArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalPlayerRecordDataTrigger*> RecordDataTriggerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerPlayerUId;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal TowerBossDefeatFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal TowerBossDefeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal NormalBossDefeatFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal RaidBossDefeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal SpecificBossDefeatFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 BossDefeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 PredatorDefeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 TribeCaptureCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal PalCaptureCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal PalCaptureBonusCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal PalButcherCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal PaldeckUnlockFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 PalCaptureBonusExpTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 NpcBonusExpTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 AreaBonusExpTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 BossDefeatExpTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 RelicBonusExpTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 NoteBonusExpTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 ItemPIckupBonusExpTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 FastTravelBonusExpTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal FindAreaFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal RelicObtainForInstanceFlag_CapturePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal RelicObtainForInstanceFlag_HungerReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal RelicObtainForInstanceFlag_SwimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal RelicObtainForInstanceFlag_FoodDecayReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal RelicObtainForInstanceFlag_JumpPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal RelicObtainForInstanceFlag_GliderSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal RelicObtainForInstanceFlag_ClimbSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal RelicObtainForInstanceFlag_StatusAilmentResist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal RelicObtainForInstanceFlag_StaminaReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal RelicObtainForInstanceFlag_SphereHoming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal RelicObtainForInstanceFlag_ExpBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal RelicObtainForInstanceFlag_RainbowPassiveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal RelicObtainForInstanceFlag_MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RelicNumArray, meta=(AllowPrivateAccess=true))
    FPalRelicPossessNumArray RelicPossessNumArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalRelicPossessNumArray RelicPossessNumArrayMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal NoteObtainForInstanceFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal ItemPickupObtainForInstanceFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal FastTravelPointUnlockFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EnteringStageInstanceId, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId EnteringStageInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> BuildingObjectMapObjectInstanceIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal CraftItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 NormalDungeonClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 FixedDungeonClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 OilrigClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal PalRankupCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> CompletedEmoteNPCIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal ArenaSoloClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal NPCTalkCountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal InvokeNPCNetworkEventMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal FishingCountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 FoundTreasureCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 CampConqueredCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal NpcItemTradeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal PalDisplayNPCDataTableProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal NPCAchivementRewardFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCaptureCompletionRelicFixupDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeBoolean bFirstFishingComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal AreaBarrierUnlockFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal UnlockedWorldMapFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 MutationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 AwakeningCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FThreadSafeBoolean bIsGameCleared;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalPlayerRecordDataFoundTreasureMapPoint> FoundTreasureMapPointMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString Debug_EnteringStageDataLayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString Debug_LastEnteredStageDataLayerName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PalCaptureCountBonusCount_Tier1_Old;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PalCaptureCountBonusCount_Tier2_Old;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PalCaptureCountBonusCount_Tier3_Old;
    
public:
    UPalPlayerRecordData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RelicNumArray();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnteringStageInstanceId();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteBuild_ServerInternal(UPalMapObjectModel* MapObjectModel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlockedPaldexCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPalCaptureCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRelicPossessNumByType(EPalRelicType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRelicLevelByType(EPalRelicType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRelicEffectRateByType(EPalRelicType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNormalBossDefeatCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFoundedAreaNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBonusExpTableIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllRelicPossessNum(TMap<EPalRelicType, int32>& OutMap) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ForwardTowerBossDefeatFlagUpdated(FName Key, bool NewValue);
    
};

