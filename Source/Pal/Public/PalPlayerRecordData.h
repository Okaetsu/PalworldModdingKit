#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalPlayerRecordDataFoundTreasureMapPoint.h"
#include "PalPlayerRecordDataRepInfoArray_BoolVal.h"
#include "PalPlayerRecordDataRepInfoArray_IntVal.h"
#include "PalStageInstanceId.h"
#include "PalPlayerRecordData.generated.h"

class UPalMapObjectModel;
class UPalPlayerRecordDataTrigger;

UCLASS(Blueprintable)
class PAL_API UPalPlayerRecordData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateTreasureMapPointDelegate, const FGuid&, PointId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateTreasureMapPointDataDelegate, const FGuid&, PointId, const FPalPlayerRecordDataFoundTreasureMapPoint&, PointData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRelicNumUpdateDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRelicNumAddedDelegate, int32, AddNum);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRelicNumUpdateDelegate OnRelicNumUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRelicNumAddedDelegate OnRelicNumAdd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UPalPlayerRecordDataTrigger>> RecordDataTriggerClassArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalPlayerRecordDataTrigger*> RecordDataTriggerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerPlayerUId;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_BoolVal TowerBossDefeatFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_IntVal TowerBossDefeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_BoolVal NormalBossDefeatFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_IntVal RaidBossDefeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_IntVal SpecificBossDefeatFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 BossDefeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 PredatorDefeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TribeCaptureCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_IntVal PalCaptureCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_IntVal PalCaptureBonusCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_IntVal PalButcherCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_BoolVal PaldeckUnlockFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 PalCaptureBonusExpTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NpcBonusExpTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 AreaBonusExpTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_BoolVal FindAreaFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_BoolVal RelicObtainForInstanceFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RelicNum, meta=(AllowPrivateAccess=true))
    int32 RelicPossessNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RelicPossessNumMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_BoolVal NoteObtainForInstanceFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_BoolVal FastTravelPointUnlockFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId EnteringStageInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> BuildingObjectMapObjectInstanceIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_IntVal CraftItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NormalDungeonClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 FixedDungeonClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 OilrigClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_IntVal PalRankupCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> CompletedEmoteNPCIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_IntVal ArenaSoloClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_IntVal NPCTalkCountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_BoolVal InvokeNPCNetworkEventMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_IntVal FishingCountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 FoundTreasureCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CampConqueredCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_BoolVal NpcItemTradeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_BoolVal PalDisplayNPCDataTableProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerRecordDataRepInfoArray_BoolVal NPCAchivementRewardFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bFirstFishingComplete;
    
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
    void OnRep_RelicNum();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteBuild_ServerInternal(UPalMapObjectModel* MapObjectModel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlockedPaldexCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPalCaptureCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNormalBossDefeatCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFoundedAreaNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBonusExpTableIndex() const;
    
};

