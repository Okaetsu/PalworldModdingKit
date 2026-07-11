#pragma once
#include "CoreMinimal.h"
#include "CommonPlayerController.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "ActionDynamicParameter.h"
#include "DelegateTickFunction.h"
#include "EPalGlobalStorageImportResult.h"
#include "EPalGroupOperationResult.h"
#include "EPalGuildJoinRequestConfirm.h"
#include "EPalGuildJoinRequestResult.h"
#include "EPalGuildPermission.h"
#include "EPalGuildRole.h"
#include "EPalLiftupRequestResult.h"
#include "EPalLocalizeTextCategory.h"
#include "EPalLogPriority.h"
#include "EPalShooterFlagContainerPriority.h"
#include "EPalStepAxisType.h"
#include "EPalTribeID.h"
#include "EPalWazaID.h"
#include "EWeaponNotifyType.h"
#include "PalCharacterContainerSortInfo.h"
#include "PalDamageInfo.h"
#include "PalDamageResult.h"
#include "PalGlobalPalStorageImportOption.h"
#include "PalGlobalPalStorageImportResultAdditionalData.h"
#include "PalGlobalPalStorageSaveParameter.h"
#include "PalGotStatusPoint.h"
#include "PalGuildMarkerData.h"
#include "PalInstanceID.h"
#include "PalItemId.h"
#include "PalItemSlotIdAndNum.h"
#include "PalKillLogDisplayData.h"
#include "PalLogAdditionalData.h"
#include "PalOptionKeyboardSettings.h"
#include "PalOptionPadSettings.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalStageInstanceId.h"
#include "Templates/SubclassOf.h"
#include "PalPlayerController.generated.h"

class AActor;
class APalAntiAirMissileLauncher;
class APalCharacter;
class APalNetworkTransmitter;
class APalOilRigCannonBase;
class APalPlayerCharacter;
class APalPlayerState;
class APalSphereBodyBase;
class APalWeaponBase;
class APawn;
class UCameraShakeBase;
class UCurveFloat;
class UForceFeedbackEffect;
class UPalAIActionComponent;
class UPalActionBase;
class UPalActionComponent;
class UPalArenaSpectateComponent;
class UPalCameraModifier;
class UPalCannonDamageReactionComponent;
class UPalCharacterMovementComponent;
class UPalCutsceneComponent;
class UPalDamageExplodeComponent;
class UPalDiscordClient;
class UPalDynamicWeaponItemDataBase;
class UPalGuildDebugReplicator;
class UPalIndividualCharacterHandle;
class UPalKillLogFilteringWaiter;
class UPalLoadoutSelectorComponent;
class UPalLongPressObject;
class UPalNPCTalkFlowComponent;
class UPalOtomoAutoAssignComponent;
class UPalPlayerDamageCamShakeRegulator;
class UPalPlayerInputOneFlameCommandList;
class UPalShooterComponent;
class UPalSkillDamageReactionComponent;
class UPalSpectateComponent;
class UPalStageEnterParameterRoom;
class UPalUserWidgetTimerGaugeBase;

UCLASS(Blueprintable)
class APalPlayerController : public ACommonPlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartSelectiongBulletDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReleasedThrowPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReleasedSpawnPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressedThrowPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressedSpawnPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressedPartnerInstructionsButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPressedMoveForwardDelegate, float, InputValue, bool, IsController);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressedJumpDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressConstructionMenuButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNPCTalkEndInServerDelegate, UPalNPCTalkFlowComponent*, TalkFlowComponent, const FName&, UniqueNPCID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNotifyUnableToPlaySkillDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNotifyRideWallStopDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMoveInputDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLongReleasedSpawnPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLongPressedSpawnPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndSelectiongBulletDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCoopRequestDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCoopReleaseDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAntiAirMissleAttackDelegate, FVector, AttackerLocation, bool, IsEnable, FGuid, AttackerID);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAdmin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalAIActionComponent* AIActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalCutsceneComponent* CutsceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalOtomoAutoAssignComponent* OtomoAutoAssignComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APalNetworkTransmitter* Transmitter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponPaletteLongPressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PawnChangeCameraInterpChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isOpenConstructionMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoopRequestDelegate OnCoopRequestDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoopReleaseDelegate OnCoopReleaseDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoopRequestDelegate OnCoopRequestDelegateForUI;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractDelegate OnInteractDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractDelegate OnInteract2Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractDelegate OnInteract3Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractDelegate OnInteract4Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPressedJumpDelegate OnPressedJumpDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPressedMoveForwardDelegate OnInputMoveForwardDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveInputDelegate OnMoveInputDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAntiAirMissleAttackDelegate OnAntiAirMissleAttack;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPressedThrowPalButtonDelegate OnPressedThrowPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReleasedThrowPalButtonDelegate OnReleasedThrowPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPressedSpawnPalButtonDelegate OnPressedSpawnPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLongPressedSpawnPalButtonDelegate OnLongPressedSpawnPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReleasedSpawnPalButtonDelegate OnReleasedSpawnPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLongReleasedSpawnPalButtonDelegate OnLongReleasedSpawnPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartSelectiongBulletDelegate OnStartSelectingBulletDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndSelectiongBulletDelegate OnEndSelectingBulletDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPressedPartnerInstructionsButtonDelegate OnPressedPartnerInstructionsButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPressConstructionMenuButtonDelegate OnPressConstructionMenuButtonDelegate;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotifyRideWallStopDelegate OnNotifyRideWallStopDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotifyUnableToPlaySkillDelegate OnNotifyUnableToPlaySkill;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* RecoilCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TimerGaugeDisplayOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> DamageCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* DamageForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* CameraShakeForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalPlayerDamageCamShakeRegulator> DamageCamShakeRegulatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPlayerDamageCamShakeRegulator* DamageCamShakeRegulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalCameraModifier> RollingCameraModifierClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalLongPressObject*> LongPressObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> cameraRotateModifierMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> AutoAimRotatorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateTickFunction PawnAfterTickFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AutoAimTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReticleTargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GamePadNativeAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseNativeAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CacheActorRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalKillLogFilteringWaiter*> FilteringWaiterArray;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCTalkEndInServerDelegate OnNPCTalkEndInServerDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CurrentTalkRelevantActor_Server;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, int32> ImportGPSDataContainerIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPlayerInputOneFlameCommandList* PlayerInputOneFlameCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid GuildFlowUniqueIdClientCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsBuldingActiveFlag_ForServer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalSpectateComponent* SpectateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalArenaSpectateComponent* ArenaSpectateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalDiscordClient* DiscordClient;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalGuildDebugReplicator* GuildDebugReplicator;
    
public:
    APalPlayerController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UpdateCharacterNickName_ToServer(const FPalInstanceID& InstanceId, const FString& NewNickName);
    
private:
    UFUNCTION(BlueprintCallable)
    bool TrySwitchOtomo();
    
    UFUNCTION(BlueprintCallable)
    void TryExecuteDirectAttackOrder();
    
public:
    UFUNCTION(BlueprintCallable)
    void ThrowPalByOutSide(AActor* PreOtomoPal, UPalIndividualCharacterHandle* PreHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TeleportToSafePoint_ToServer(bool bWasOutOfWorld);
    
    UFUNCTION(BlueprintCallable)
    bool StopDash();
    
    UFUNCTION(BlueprintCallable)
    void StartStepCoolDownCoolTimer();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartRollingCameraModifier();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartFlyToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void SpectateNextPlayer(int32 Direction);
    
    UFUNCTION(BlueprintCallable)
    void SpectateFreely();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SkillDamageReactionComponent_ProcessDamage_ToServer(UPalSkillDamageReactionComponent* SkillDamage, const FPalDamageInfo& Info);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ShooterComponent_StopReload_ToServer(UPalShooterComponent* Shooter, int32 ID);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ShooterComponent_SetTargetDirection_ToServer(UPalShooterComponent* Shooter, FVector targetDirection);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ShooterComponent_SetReloadStartRemainingBullets_ToServer(UPalShooterComponent* Shooter, int32 bulletNum);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ShooterComponent_ReloadWeaponImmediate_ToServer(UPalShooterComponent* Shooter, int32 consumeBulletNum, UPalDynamicWeaponItemDataBase* dynamicData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ShooterComponent_ReloadWeapon_ToServer(UPalShooterComponent* Shooter, int32 ID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ShooterComponent_PullCancel_ToServer(UPalShooterComponent* Shooter, int32 ID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ShooterComponent_NotifyBulletItemId_ToServer(UPalShooterComponent* Shooter, const APalWeaponBase* TargetWeapon, const FName& BulletItemId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ShooterComponent_ChangeIsShooting_ToServer(UPalShooterComponent* Shooter, int32 ID, bool IsShooting, bool bCanShootOnRelease);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ShooterComponent_ChangeIsJetpackShooting_ToServer(UPalShooterComponent* Shooter, int32 ID, bool IsShooting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ShooterComponent_ChangeIsAltShooting_ToServer(UPalShooterComponent* Shooter, int32 ID, bool IsShooting, bool bCanShootOnRelease);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ShooterComponent_ChangeIsAiming_ToServer(UPalShooterComponent* Shooter, int32 ID, EPalShooterFlagContainerPriority Priority, bool IsAiming);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetupInternalForSphere_ToServer(int32 ID, APalSphereBodyBase* Target, APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetupInternalForSphere_ToALL(int32 ID, APalSphereBodyBase* Target, APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetupInternalForSphere(APalSphereBodyBase* Target, APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetSneakBonusFlagForSphere_ToServer(int32 ID, APalSphereBodyBase* Target, bool isSneak);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetSneakBonusFlagForSphere_ToALL(int32 ID, APalSphereBodyBase* Target, bool isSneak);
    
    UFUNCTION(BlueprintCallable)
    void SetSneakBonusFlagForSphere(APalSphereBodyBase* Target, bool isSneak);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SetRiderRelativeRotation_ToServer(FRotator Rotator);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOtomoSlot(int32 SlotId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHoldOtomo(int32 HoldID, UPalIndividualCharacterHandle* OtomoHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisableThrowPalFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableSwitchPalFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableSetViewTargetFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableSelectingBulletFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisablePartnerInstructionsFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetDisableInputFlag_ToClient(FName flagName, bool bIsDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableInputFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableCoopFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableAimInputFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetCriticalCaptureFlagForSphere_ToServer(int32 PlayerId, APalSphereBodyBase* TargetSphere, bool bIsCritical);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetCriticalCaptureFlagForSphere_ToALL(int32 PlayerId, APalSphereBodyBase* TargetSphere, bool bIsCritical);
    
    UFUNCTION(BlueprintCallable)
    void SetCriticalCaptureFlagForSphere(APalSphereBodyBase* TargetSphere, bool bIsCritical);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetCaptureLevelForSphere_ToServer(int32 ID, APalSphereBodyBase* Target, int32 Level);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetCaptureLevelForSphere_ToALL(int32 ID, APalSphereBodyBase* Target, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void SetCaptureLevelForSphere(APalSphereBodyBase* Target, int32 Level);
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SetCameraRotatorToPlayerCharacter_ToServer(FRotator CameraRotator);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAutoRun(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SendScreenLogToClient(const FString& Message, FLinearColor Color, float Duration, const FName& Key);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SendLog_ToClient(const EPalLogPriority Priority, EPalLocalizeTextCategory TextCategory, const FName TextId, const FPalLogAdditionalData& AdditionalData);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendBuldingActiveFlag_ToServer(bool IsActive);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SendAlertDialog_ToClient(const FName TextId);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SelfKillPlayer();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPCDummy();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReserveSummonWeapon_ToServer(UPalDynamicWeaponItemDataBase* InDynamicItem);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestUseItemToCharacter_ToServer(const FPalItemSlotIdAndNum& ItemData, const FPalInstanceID& TargetCharacterID);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestUseItemToCharacter(const FPalItemSlotIdAndNum& ItemData, const FPalInstanceID& TargetCharacterID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSyncOilrigDestroyObject_ToServer(FGuid ObjectID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSwapDimensionStorageData_ToServer(int32 IndexA, int32 IndexB);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSwapBetweenDimensionStorageAndPalStorage_ToServer(int32 DimensionStorageDataIndex, int32 PalStorageDataIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestStartNPCTalkFlow(UPalNPCTalkFlowComponent* TalkFlowComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSortDimensionStorage_ToServer(const FPalCharacterContainerSortInfo& SortInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSetRolePermission_ToServer(EPalGuildRole TargetRole, EPalGuildPermission Permission, bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSendAllDimensionStorage_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRestoreDimensionStorageFixedIndex_ToServer(int32 OriginalLockerDataIndex, int32 TargetRestorePalStorageSlotIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRestoreDimensionStorage_ToServer(int32 OriginalLockerDataIndex, int32 TargetRestorePalStorageRootPageIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRemoveGuildMarker_ToServer(const FGuid& MarkerID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestOpenDimensionStorage_ToServer(const FGuid& LockerMapObjectId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestOilrigGoalCrateInteract();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestMoveToWorker_ToServer(APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestLiftupThrow_ToServer(AActor* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestLiftup_ToServer(APalCharacter* TargetCharacter);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestImportGlobalPalStorageData_ToServer(const FPalGlobalPalStorageSaveParameter& ImportParameter, const int32 TargetSlotIndex, const FPalGlobalPalStorageImportOption& ImportOption);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestGetUserInfoByPlayerUId_ToServer(FGuid InPlayerUId);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestFastTravel_ToServer(const FGuid& LocationId);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestExitGuild_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestEnterToPlayerGuild_ToServer(APalPlayerCharacter* RespondentPlayerCharacter);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestEnterRoom_ToServer(const FPalStageInstanceId& StageInstanceId, const UPalStageEnterParameterRoom* EnterParameter);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestEndNPCTalkFlow(UPalNPCTalkFlowComponent* TalkFlowComponent, const FGuid& Token, bool bIsCancel, bool bResetCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestEnableGuildDebugReplicator_ToServer(const FGuid& GuildId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDisableGuildDebugReplicator_ToServer(const FGuid& GuildId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDestroyOilrigCannon(APalOilRigCannonBase* Cannon);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDestroyAntiAirLauncher(APalAntiAirMissileLauncher* Launcher);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDecreaseWeaponDurability_ToServer(FPalItemId ItemId, float DecreaseValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDebugValidateResult_ToServer(const FGuid& GuildId, EPalGuildPermission Permission, const FGuid& TargetPlayerUId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDebugReplicationCompare_ToServer(const FGuid& GuildId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDebugOtherGuildInfo_ToServer(const FGuid& GuildId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDebugGuildInfo_ToServer(const FGuid& GuildId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestCloseDimensionStorage_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeRole_ToServer(const FGuid& TargetPlayerUId, EPalGuildRole NewRole);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeGuildName_ToServer(const FString& NewGuildName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeGuildMarker_ToServer(const FGuid& MarkerID, const FPalGuildMarkerData& NewMarker);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeDimensionStoragePage_ToServer(int32 NewPageNum);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeCharacterMakeInfo_ToServer(const FPalPlayerDataCharacterMakeInfo& NewMakeInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeAdminGuild_ToServer(const FGuid& NextAdminPlayerUId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestBanPlayerFromGuild_ToServer(const FGuid& TargetPlayerUId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestAddGuildMarker_ToServer(const FGuid& MarkerID, const FPalGuildMarkerData& NewMarker);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestAddDimensionStorageDataFixedDataIndex_ToServer(int32 TargetLockerDataIndex, int32 OriginalPalStorageDataSlotIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestAddDimensionStorageData_ToServer(const TArray<int32>& OriginalPalStorageDataIndexArray, int32 RootPageIndex);
    
    UFUNCTION(Reliable, Server)
    void ReplaceEquipWaza_ToServer(const FPalInstanceID& InstanceId, const EPalWazaID OldWaza, const EPalWazaID NewWaza);
    
    UFUNCTION(Reliable, Server)
    void RemoveEquipWaza_ToServer(const FPalInstanceID& InstanceId, const EPalWazaID TargetWaza);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveCameraRotateSpeedModifierRate(const FName& modifierName);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReleaseSummonWeapon_ToServer(UPalDynamicWeaponItemDataBase* InDynamicItem);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveSuccessRequestEnterGuild_ToClient(const EPalGuildJoinRequestResult Result, const FPalInstanceID& EnterPlayerInstanceId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveOfferJoinGuildPlayer_ToClient(const FGuid& FlowUniqueId, const FPalInstanceID& RequestPlayerInstanceId);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveLiftupRequestResult_ToClient(EPalLiftupRequestResult Result);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveFailedRequestGuildWithLog_ToClient(const EPalGuildJoinRequestResult Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveFailedRequestGuildWithAlert_ToClient(const EPalGuildJoinRequestResult Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveDebugValidateResult_ToClient(bool bHasPermission, EPalGroupOperationResult Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveDebugReplicationCompare_ToClient(bool bInSync, int32 MemberCountServer, int32 MemberCountClient);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveDebugOtherGuildInfo_ToClient(const FGuid& GuildId, const FString& GuildName, int32 MemberCount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveDebugGuildInfo_ToClient(const FGuid& GuildId, const FString& GuildName, int32 MemberCount, const FGuid& MasterUId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReauestDamageExplode_ToServer(UPalDamageExplodeComponent* ExplodeComponent, const FPalDamageInfo DamageInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool PlaySkill(int32 SlotId);
    
public:
    UFUNCTION(BlueprintCallable)
    void PalDeprojectScreenPositionToWorld(FVector& StartLocation, FVector& RayDirection);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponNotify(EWeaponNotifyType Type);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateWeightInventory(float Weight);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnUpdateStatusPoint_FoodDecayReduction(FName StatusName, int32 PrevPoint, int32 NewPoint);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateOtomoSlotWithCompletedInitializedParameter_ServerInternal(APalCharacter* PalCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateOtomoSlotWithActor_ServerInternal(int32 SlotIndex, UPalIndividualCharacterHandle* LastHandle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwitchOtomoSpawn();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartGliding();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartCoopRequest();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartAim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnAndRideSupportPal();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReleasedSpawnPalButton();
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveConfirmResultRequestGuild_ClientInternal(const bool bResponse);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedWeaponPrevButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedWeaponNextButtonKeyboard();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedUseRecoveryItemButton();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPressedInteract2Button();
    
    UFUNCTION(BlueprintCallable)
    void OnOverWeightInventory(float Weight);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOtomoChangeIncrement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOtomoChangeDecrement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOtomo_ShortReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOtomo_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOtomo_LongReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOtomo_LongPressed();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLongReleasedSpawnPalButton();
    
    UFUNCTION(BlueprintCallable)
    void OnLongPressedCoopButton();
    
    UFUNCTION(BlueprintCallable)
    void OnLanded(UPalCharacterMovementComponent* MovementComponent, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnJump(UPalCharacterMovementComponent* MovementComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeLocalPlayer_BP();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGetOffAndDespawnSupportPal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlyRideTakeOff();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFixedWeightInventory(float Weight);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFilteredKillLog(UPalKillLogFilteringWaiter* Waiter, const FPalKillLogDisplayData& KillLogData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndRolling();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndCoopRequest();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndAim();
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyPawn(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(FPalDamageResult DamageResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCreatedGPSPalData(FPalInstanceID IndividualId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeSwimming(bool IsInSwimming);
    
    UFUNCTION(BlueprintCallable)
    void OnChangePadOption(const FPalOptionPadSettings& PrevSettings, const FPalOptionPadSettings& NewSettings);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeOtomoSlot();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeKeyboardOption(const FPalOptionKeyboardSettings& PrevSettings, const FPalOptionKeyboardSettings& NewSettings);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeInstructions();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActionBegin(const UPalActionBase* ActionBase);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyWarningSignByAntiAirMissileLauncher_ToClient(bool IsShow, FGuid CannonID, FVector AttaclerLocation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyTimeoutDimensionLocker();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyRideWallStop_ToClient();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyRestoreDimensionStorageDataToPalstorage(int32 RestoredPalstorageDataIndex);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyOilrigGoalCrateOpen_ToClient();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyNPCTalkToken(UPalNPCTalkFlowComponent* TalkFlowComponent, const FGuid& NewToken, const int32 TalkCount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyNickNameUpdated_ToClient(FGuid PlayerUId, const FString& PlayerName, FGuid GroupId, const FString& GuildName);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyLiftupCampPal_ToClient(APalCharacter* TargetCharacter);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyImportGlobalPalStorageDataResult_ToClient(EPalGlobalStorageImportResult ImportResult, const FPalGlobalPalStorageImportResultAdditionalData& AdditionalData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyGuildNameUpdated_ToClient(FGuid GroupId, const FString& NewGuildName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyGetUserInfoByPlayerUId_ToClient(bool bSuccess, FGuid PlayerUId, const FString& PlayerName, FGuid GroupId, const FString& GuildName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyFailedStartRaidByOverConcurrentStageLimitation_ToClient();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyConfirmRequestGuild_ToServer(const FGuid& FlowUniqueId, const bool bResponse);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void LostOtomoByInstacneID_ToServer(const FPalInstanceID& InstanceId);
    
private:
    UFUNCTION(BlueprintCallable)
    void JumpCancelPalThrow(UPalCharacterMovementComponent* MovementComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpectating() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectingBullet() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRidingFlyPal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRiding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOtomoPartnerSkillCanTrigger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuldingActiveFlagForServer() const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void IncrementFavoriteIndexPal_ToServer(const FPalInstanceID& InstanceId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void IncrementDimensionStoragePalFavoriteIndex_ToServer(int32 TargetLockerDataIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InactiveOtomo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<UPalUserWidgetTimerGaugeBase> GetTimerGaugeWidgetClass();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetRiderCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetPlayerUId() const;
    
    UFUNCTION(BlueprintCallable)
    UPalSpectateComponent* GetPalSpectateComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalPlayerState* GetPalPlayerState() const;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void GetOffToServer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetLowBodyPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetLowBodyPalCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalLoadoutSelectorComponent* GetLoadoutSelectorComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetKeyboardMoveValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetDefaultPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetControlPalCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetControllerRightStickValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetControllerLeftStickValue() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FlushCoopActionLongPressInput();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void EnterChat_Receive(const FString& Message, uint8 Category);
    
    UFUNCTION(BlueprintCallable)
    void EndSpectate();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void EndFlyToServer();
    
    UFUNCTION(BlueprintCallable)
    void EnableShootingByAction(const UPalActionComponent* Component);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoStep(EPalStepAxisType Axis, FVector2D StepDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoAirDash(EPalStepAxisType Axis, FVector2D DashDirection);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_UnlockAllAreaBarriers_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_TogglePartnerSkillNoDecrease();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_ToggleBaseCampPalFarMovementTickSuppress_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_TeleportToNearestPlayer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_TeleportToNearestCamp();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_TeleportToBotLocation(int32 botIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_TeleportToBotCamp(int32 botIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_Teleport2D_FixedZ(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_Teleport2D(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_ShowInvaderDebugLog();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_SetStatusPoint_ToServer(FName StatusPointName, int32 StatusLevel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_SetPalWorldTimeScale(float Rate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_SetPalWorldTime(int32 Hour);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_SetPalCaptureNumRecordAll(const int32 CaptureNum);
    
    UFUNCTION(Reliable, Server)
    void Debug_SetPalCaptureNumRecord(const EPalTribeID TribeId, const int32 CaptureNum);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_SetFPSForServer(float fps);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_SetBaseCampPalFarMovementTickSuppress_ToServer(bool bOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_SetArenaRankPoint(int32 RankPoint);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_RerollCharacterMake();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Debug_ReceiveCheatCommand_ToClient(const FString& Message);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_ParallelForUpdateActiveTiles();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_NotConsumeMaterialsInCraft();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_NotConsumeMaterialsInBuild();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_NetRepGraphPrintGraph_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_Muteki_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_InvaderMarchRandom();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_InvaderMarchForNearCamp(FName InvaderGropuName, bool bSkipInvaderDeclaration);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_InvaderMarch(FName InvaderGropuName, bool bSkipInvaderDeclaration);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_InsightsTraceStop_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_InsightsTraceStart_ToServer(const FString& TraceFilePrefix);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_IgnoreRestrictedByItemsForPartnerSkill();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_HighJump_ToServer();
    
    UFUNCTION(BlueprintCallable)
    void Debug_HighJump();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_ForceSpawnRarePal_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_ForceSpawnPredatorPal_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_EnableCollectPalCount();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_DumpPalCharacterActors_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_DumpActors_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_DisableAnimTickForServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_CheatCommand_ToServer(const FString& Command);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_AddPlayerExp_ToServer(int32 addExp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_AddPartyExp_ToServer(int32 addExp);
    
    UFUNCTION(Reliable, Server)
    void Debug_AddMoney_ToServer(int64 addValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_AddExpForALLPlayer_ToServer(int32 addExp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DamageReactionComponent_ProcessDeath_ToServer_ToSelfPlayer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DamageReactionComponent_ProcessDeath_ToServer_ToNPC(const AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DamageReactionComponent_ProcessDamage_ToServer_ToSelfPlayer(const FPalDamageInfo& Info, const AActor* DefenderOtomo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DamageReactionComponent_ProcessDamage_ToServer_ToNPC(const FPalDamageInfo& Info, const AActor* Defender);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DamageReactionComponent_ProcessDamage_ToServer_ToEnemyPlayer(const FPalDamageInfo& Info, const AActor* Defender);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ConfirmRequestJoinGuildWarning_ToClient(const FGuid& FlowUniqueId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ConfirmRequestGuild_ToClient(const FGuid& FlowUniqueId, const EPalGuildJoinRequestConfirm ConfirmType);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayForceFeedbackForPal_Internal(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    
    UFUNCTION(BlueprintCallable)
    void ClientPlayForceFeedbackForPal(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBeginSpectate(bool bAdminMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ClearSummonWeapon_ToServer(UPalDynamicWeaponItemDataBase* InDynamicItem);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSpectateMoveSpeed(int32 Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayWhistleForRideCall() const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void CannonDamageReactionComponent_ProcessDamage_ToServer(UPalCannonDamageReactionComponent* CannonDamage, const FPalDamageInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCooping() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CancelSelectingBullet();
    
    UFUNCTION(BlueprintCallable)
    void CancelRollingCameraModifier();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void CallOnCoopReleaseDelegate_ToServer();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnCoopReleaseDelegate_ToAll();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginSpectate(bool bAdminMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddPlayerStatusPoint_ToServer(const TArray<FPalGotStatusPoint>& AddStatusPointArray);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddKillLog_Client(const FPalKillLogDisplayData& KillLogData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddHardcorePlayerDeathLog_Client(const FPalKillLogDisplayData& DeathLogData);
    
    UFUNCTION(Reliable, Server)
    void AddEquipWaza_ToServer(const FPalInstanceID& InstanceId, const EPalWazaID NewWaza);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddDeathLog_Client(const FPalKillLogDisplayData& DeathLogData);
    
private:
    UFUNCTION(BlueprintCallable)
    void AddCameraRotateSpeedModifierRate(const FName& modifierName, float Rate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateCurrentOtomoNearThePlayer();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ActionComponent_PlayAction_ToServer_ForPlayer(AActor* TargetActor, FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass, int32 issuerID);
    
};

