#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "EPalFightGameState.h"
#include "EPalFightUINotify.h"
#include "OnPalFightEnemyCountChangedDelegate.h"
#include "OnPalFightGameStateChangedDelegate.h"
#include "PalDeadInfo.h"
#include "PalFightSpawnEntry.h"
#include "PalInstanceID.h"
#include "PalLevelObject_LockGimmickBase.h"
#include "Templates/SubclassOf.h"
#include "PalLevelObject_LockGimmickPalFight.generated.h"

class AActor;
class APalAIController;
class APalCharacter;
class APalLockGimmickLightOrb;
class APalPlayerCharacter;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalLockGimmickPalFightWidget;
class UPrimitiveComponent;
class USceneComponent;
class USphereComponent;
class USplineComponent;

UCLASS(Blueprintable)
class PAL_API APalLevelObject_LockGimmickPalFight : public APalLevelObject_LockGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* TriggerSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GameState, meta=(AllowPrivateAccess=true))
    EPalFightGameState GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float GameStartServerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimitSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeoutTeleportDelaySeconds;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPalFightGameStateChanged OnGameStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPalFightEnemyCountChanged OnEnemyCountChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RemainingEnemyCount, meta=(AllowPrivateAccess=true))
    int32 RemainingEnemyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalEnemyCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalFightSpawnEntry> SpawnEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeaveGraceSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalAIController> AIControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ReturnPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalLockGimmickPalFightWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLightOrb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalLockGimmickLightOrb> LightOrbClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightOrbMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightOrbInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bLightOrbArrived, meta=(AllowPrivateAccess=true))
    bool bLightOrbArrived;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> SpawnedHandles;
    
public:
    APalLevelObject_LockGimmickPalFight(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnComplete(FPalInstanceID InstanceId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemainingEnemyCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bLightOrbArrived();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemainingEnemyCountChanged(int32 Remaining, int32 Total);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPalSpawnedAndInitialized(APalCharacter* SpawnedCharacter, APalAIController* SpawnedAIController, const TArray<APalPlayerCharacter*>& Players);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPalDead(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnPalCaptured(APalCharacter* SelfCharacter, APalCharacter* Attacker);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLightOrbArrivedBP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLightOrbArrived();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameStateChanged(EPalFightGameState NewState, EPalFightGameState OldState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCreatedIndividualParameter(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_NotifyUI(APalPlayerCharacter* Player, EPalFightUINotify Notify);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ActivateAndPlaySpawnEffect(APalCharacter* Character);
    
};

