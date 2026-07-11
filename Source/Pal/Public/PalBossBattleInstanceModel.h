#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalBossBattleState.h"
#include "EPalBossType.h"
#include "PalBossBattleSuccessItemInfo.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalStageInstanceId.h"
#include "PalBossBattleInstanceModel.generated.h"

class ALevelInstance;
class APalBossBattleEventBase;
class APalBossBattleInstanceRoot;
class APalBossTower;
class APalCutsceneActor;
class APalMapObject;
class APalPlayerCharacter;
class UAkAudioEvent;
class UDataLayerAsset;
class UPalBossBattleSequencer;

UCLASS(Blueprintable)
class PAL_API UPalBossBattleInstanceModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeReadyPhaseTimeLimitDateDelegate, FDateTime, ReadyPhaseTimeLimitDate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeEntryPlayerDelegate, TArray<APalPlayerCharacter*>, EntryPlayers);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCombatTimeMaxDelegate, int32, CombatTimeMax);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCombatTimeLimitDelegate, float, CombatTimeLimit);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeBossBattleStateDelegate, EPalBossBattleState, BossBattleState);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform FrontWarpPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize RepFrontWarpPointtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform TopWarpPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform StartPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform DeadItemDropTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId StageInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalBossType BossType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalCutsceneActor> IntroCutsceneActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalCutsceneActor> EndingCutsceneActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ALevelInstance> BossRoomLevelInstanceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> IntroBGMAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> LoopBGMAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bUseDefaultBattleBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CombatTimeMax, meta=(AllowPrivateAccess=true))
    int32 CombatTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSpawnBossAtStart_InServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BossBattleInstanceRoot, meta=(AllowPrivateAccess=true))
    APalBossBattleInstanceRoot* BossBattleInstanceRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APalBossTower* BossTower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BossBattleState, meta=(AllowPrivateAccess=true))
    EPalBossBattleState BossBattleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EntryPlayers, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> EntryPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MaxJoinablePlayerNum, meta=(AllowPrivateAccess=true))
    int32 MaxJoinablePlayerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> WonPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> FirstClearPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CombatTimeLimit, meta=(AllowPrivateAccess=true))
    float CombatTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBossBattleSequencer* LocalBattleSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalBossBattleDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalBossBattleSuccessItemInfo> SuccessItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> OneTimeRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalBossBattleEventBase> BossBattleEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* ReservedDataLayerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bSpawnPalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReadyPhaseTimeLimitDate, meta=(AllowPrivateAccess=true))
    FDateTime ReadyPhaseTimeLimitDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid BossBattlePalBoxInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid BossBattleBaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName BossPalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ReadyPhaseTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CapturePhaseTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid PalBoxRequestPlayerUId;
    
public:
    UPalBossBattleInstanceModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSpawnPalBox() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateCombatTimeMax();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateCombatTimeLimit();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateBossBattleState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReadyPhaseTimeLimitDate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxJoinablePlayerNum();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EntryPlayers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CombatTimeMax();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CombatTimeLimit();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BossBattleState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BossBattleInstanceRoot();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseDefaultBattleBGM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelInstanceLoaded() const;
    
    UFUNCTION(BlueprintCallable)
    void GiftSuccessItem_OnePlayer(APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetReadyPhaseTimeLimitDate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReadyPhaseRemainingSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCombatTimeMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBossType GetBossType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBossPalId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBossBattleState GetBossBattleState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalMapObject* GetBossBattlePalBoxActor() const;
    
};

