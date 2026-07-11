#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "EPalCharacterCompleteDelegatePriority.h"
#include "EPalCharacterImportanceType.h"
#include "EPalWazaID.h"
#include "FlagContainer.h"
#include "PalDamageRactionInfo.h"
#include "PalDeadInfo.h"
#include "PalOnCharacterCompleteInitializeParameterDelegate.h"
#include "PalStageInstanceId.h"
#include "PalTalkableObjectInterface.h"
#include "PalCharacter.generated.h"

class AActor;
class APalCharacter;
class APalExplosiveSporePawnBase;
class APalPlayerState;
class UAnimMontage;
class UCurveVector;
class UNiagaraSystem;
class UPalActionComponent;
class UPalAnimNotifyParameterComponent;
class UPalCharacterAroundInfoCollectorComponent;
class UPalCharacterCameraComponent;
class UPalCharacterMovementComponent;
class UPalCharacterParameterComponent;
class UPalDamageReactionComponent;
class UPalFlyMeshHeightCtrlComponent;
class UPalFootIKComponent;
class UPalHeadUpDisplayComponent;
class UPalLookAtComponent;
class UPalNavigationInvokerComponent;
class UPalPassiveSkillComponent;
class UPalShooterSpringArmComponent;
class UPalSkeletalMeshComponent;
class UPalStaticCharacterParameterComponent;
class UPalStatusComponent;
class UPalVisualEffectComponent;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USphereComponent;

UCLASS(Blueprintable)
class APalCharacter : public ACharacter, public IPalTalkableObjectInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWhistleFinishDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWhistleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRollingDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPalCharacterRagdollDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStillInWorldTriggered_Client);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStillInWorldTriggered);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCompleteSyncPlayerFromServer_InClient);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompleteInitializeParameter, APalCharacter*, InCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeImportance, EPalCharacterImportanceType, NextType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeBattleModeCharacter, APalCharacter*, SelfCharacter, bool, bIsBattleMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeBattleMode, bool, bIsBattleMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeActiveActor, bool, bIsActive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCaptured, APalCharacter*, SelfCharacter, APalCharacter*, Attacker);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateGroundInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalActionComponent* ActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalCharacterParameterComponent* CharacterParameterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalStaticCharacterParameterComponent* StaticCharacterParameterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalDamageReactionComponent* DamageReactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalStatusComponent* StatusComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalShooterSpringArmComponent* CameraBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalCharacterCameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalLookAtComponent* LookAtComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNavigationInvokerComponent* NavInvokerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalFootIKComponent* FootIKComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalVisualEffectComponent* VisualEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalPassiveSkillComponent* PassiveSkillComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalHeadUpDisplayComponent* HUDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalAnimNotifyParameterComponent* AnimNotifyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalCharacterAroundInfoCollectorComponent* AroundInfoCollectorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* RagdollInteractiveSphere;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeActiveActor OnChangeActiveActorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRollingDelegate OnRollingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRollingDelegate OnRollingFinishDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWhistleDelegate OnWhistleBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWhistleFinishDelegate OnWhistleFinishDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnCompleteSyncPlayerFromServer_InClient OnCompleteSyncPlayerFromServer_InClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStillInWorldTriggered OnStillInWorldTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStillInWorldTriggered_Client OnStillInWorldTriggered_Client;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalCharacterRagdollDelegate OnStartRagdollDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalCharacterRagdollDelegate OnEndRagdollDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeBattleMode OnChangeBattleModeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeBattleModeCharacter OnChangeBattleModeCharacterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeImportance OnChangeImportanceDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCaptured OnCapturedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCaptured OnCapturedCharacterParameterChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> AirJumpEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsNeutralGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 Rep_LastInputVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseActorNetCullDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* EmissionCorrectionTimeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EmissionCorrectionValueInDungeon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBattleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoreChangeBattleModeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTalkMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPalFlyMeshHeightCtrlComponent* FlyMeshHeightCtrlComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPalActiveActor, meta=(AllowPrivateAccess=true))
    bool bIsPalActiveActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EnableDungeonLightingChannel2, meta=(AllowPrivateAccess=true))
    bool bEnableDungeonLightingChannel2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsOtomoCollision, meta=(AllowPrivateAccess=true))
    bool bIsOtomoCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocalInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisable_ChangeTickInterval_ByImportance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomAutoAimTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation_ForServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagContainer IsDisableChangeTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalCharacterImportanceType ImportanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RideMeshTranslationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckIndividualParameterReplicateTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RootCollisionProfileName, meta=(AllowPrivateAccess=true))
    FName RootCollisionProfileName;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalCharacterCompleteDelegatePriority, FOnCompleteInitializeParameter> OnCompleteInitializeParameterDelegateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionResponse>> OtomoResponseMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentAirDashCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bUseBodyPartsCollisionProfileNameBaseCamp, meta=(AllowPrivateAccess=true))
    bool bUseBodyPartsCollisionProfileNameBaseCamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bUseNoCollisionForBaseCampSpecialWorker, meta=(AllowPrivateAccess=true))
    bool bUseNoCollisionForBaseCampSpecialWorker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid SwimWetnessStatusInvokerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, float> OpacityValueMap;
    
public:
    APalCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateGroundRayCast(bool bImmediateApply);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateCharacterEmissionOnMinutesChange();
    
public:
    UFUNCTION(BlueprintCallable)
    void UnbindOnCompleteInitializeParameterDelegate(EPalCharacterCompleteDelegatePriority Priority, const FPalOnCharacterCompleteInitializeParameter& Event);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleHandAttachMesh(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleCharacterMesh(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetRideMeshTranslationOffset(FVector InNewRideMeshTranslationOffset);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetOtomoCollisionProfile(bool IsOtomoCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalHiddenForCutscene(bool bHide);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableChangeIntervalByImportance(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveCollisionMovement(bool Active);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetActiveActorStayVisible(bool Active);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetActiveActor(bool Active);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPCDummy();
    
    UFUNCTION(BlueprintCallable)
    void ResetTickInterval();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void RequestPlayCosmeticMontage_ToServer(UAnimMontage* Montage, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void RequestJump();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestExplosiveSporeNullify(APalExplosiveSporePawnBase* SporePawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestExplosiveSporeHit(APalExplosiveSporePawnBase* SporePawn);
    
    UFUNCTION(BlueprintCallable)
    void RequestExecuteTickNextFrameForAction();
    
    UFUNCTION(BlueprintCallable)
    void ReplaceCurrentReservedMontage_WithPlayRate(UAnimMontage* ReservedMontage, UAnimMontage* NewMontage, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void RefreshDungeonLightingChannels();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayCosmeticMontage_ToAll(UAnimMontage* Montage, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void Play2Montage_WithPlayRate(UAnimMontage* firstMontage, UAnimMontage* nextMontage, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void Play2Montage(UAnimMontage* firstMontage, UAnimMontage* nextMontage);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnTeleport_ToClient(const FVector& Location, const FQuat& Rotation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RootCollisionProfileName();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPalActiveActor(bool PrevIsActiveActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOtomoCollision(bool PrevbIsOtomoCollision);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnableDungeonLightingChannel2();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bUseNoCollisionForBaseCampSpecialWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bUseBodyPartsCollisionProfileNameBaseCamp();
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapEndByAroundInfo(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBeginByAroundInfo(AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMovedToFieldFromStageInClient(APalPlayerState* InPlayerState, const FPalStageInstanceId& InStageInstanceId);
    
    UFUNCTION(BlueprintCallable)
    void OnMovedIntoStageInClient(APalPlayerState* InPlayerState, const FPalStageInstanceId& InStageInstanceId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnJump(UPalCharacterMovementComponent* Component);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDeadCharacter(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageReaction(FPalDamageRactionInfo ReactionInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeWetnessStatus(bool IsSwim);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyStillInWorldTriggered_ToClient();
    
public:
    UFUNCTION(BlueprintCallable)
    void LocalInitialized();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void LaunchRecovery_ToAll(FVector_NetQuantize10 LaunchVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseCustomAutoAimTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreCooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalHiddenForCutscene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllActiveSkillCooldownFinished() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActiveSkillCooldownFinished(const EPalWazaID WazaID) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<USceneComponent*>& OutComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTalkMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRideMeshTranslationOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalCharacterMovementComponent* GetPalCharacterMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UNiagaraSystem> GetOverrideSleepFX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMeshComponent* GetOverrideFaceMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalSkeletalMeshComponent* GetMainMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetHPGaugeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetHandAttachMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetCurrentReservedMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalCharacterParameterComponent* GetCharacterParameterComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBattleMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActiveActorFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalActionComponent* GetActionComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceResetJumpState();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void FixSleepingLocation_ToAll(const FTransform& SleepTransform);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClearRagdollForBaseCampResurrect_ToAll();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ChangeWantFood_ToAll(bool IsWantFood, bool IsExistFood);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ChangeTalkModeFlag_ToAll(bool IsTalk);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ChangeBattleModeFlag_ToAll(bool IsBattle);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeBattleModeFlag(bool IsBattle);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnCompleteInitializeParameter();
    
    UFUNCTION(BlueprintCallable)
    void BindOnCompleteInitializeParameterDelegate(EPalCharacterCompleteDelegatePriority Priority, const FPalOnCharacterCompleteInitializeParameter& Event);
    

    // Fix for true pure virtual functions not being implemented
};

