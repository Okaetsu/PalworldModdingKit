#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalBossBattleState.h"
#include "EPalBossType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalBossTower.generated.h"

class APalPlayerCharacter;
class APalPlayerState;
class UPalBossBattleInstanceModel;

UCLASS(Blueprintable)
class PAL_API APalBossTower : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeBossTowerEntryWaitUI, bool, bIsCountDown, float, TimeLimit);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeBossTowerEntryWaitUI OnChangeBossTowerEntryWaitUI;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBossType BossType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid EntryWaitInfoHUDId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStandaloneBossTower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InstanceModel, meta=(AllowPrivateAccess=true))
    UPalBossBattleInstanceModel* InstanceModel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CombatTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CombatTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShouldUpdateBattleInfoTowerBossCountdown;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid LocationInstanceId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle LocalBossDefeatRegisterTimerHandle;
    
public:
    APalBossTower(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool WriteBossDefeatRecord_ServerInternal(APalPlayerCharacter* TargetPlayer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateEntry_Multicast(EPalBossBattleDifficulty NewDifficulty, const TArray<APalPlayerCharacter*>& NewEntryPlayers, EPalBossBattleState InBossBattleState);
    
    UFUNCTION(BlueprintCallable)
    void ShowWaitInfo(const FVector TargetLocation, const FVector DisplayOffset, bool isWaiting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldInfoMaskByBossType() const;
    
    UFUNCTION(BlueprintCallable)
    void RequestBossBattleStart();
    
    UFUNCTION(BlueprintCallable)
    void RequestBossBattleEntry(EPalBossBattleDifficulty Difficulty);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateLocalBossDefeatFlag(FName Key, bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InstanceModel();
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteSyncLocalPlayer(APalPlayerState* PlayerState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeLocalBossDefeatStateBP(bool bDefeated);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeEntryPlayer(TArray<APalPlayerCharacter*> EntryPlayers);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeCombatTimeMax(int32 NewCombatTimeMax);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeCombatTimeLimit(float NewCombatTimeLimit);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeBossBattleStateBP(EPalBossBattleState NewState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeBossBattleState(EPalBossBattleState NewBossBattleState);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyEntryUpdateAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalBossDefeated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntered(APalPlayerCharacter* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetTopWarpPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetFrontWarpPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetDeadItemDropPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBossBattleRowName();
    
    UFUNCTION(BlueprintCallable)
    void CloseWaitInfo();
    

    // Fix for true pure virtual functions not being implemented
};

