#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalLogType.h"
#include "EPalOtomoPalOrderType.h"
#include "PalCharacterSlotId.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalStaticItemIdAndNum.h"
#include "PalOtomoHolderComponentBase.generated.h"

class AActor;
class AController;
class APalCharacter;
class APawn;
class UPalIndividualCharacterContainer;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalIndividualCharacterSlot;
class UPalOtomoSpawnCollisionChecker;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalOtomoHolderComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateOtomoSlotWithInitializedParameterDelegate, APalCharacter*, Character);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateOtomoSlotDelegate, int32, SlotIndex, UPalIndividualCharacterHandle*, LastHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOtomoSpawnedDelegate, AController*, HolderController, APalCharacter*, OtomoPal);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOtomoOrderFeedbackDelegate, EPalOtomoPalOrderType, OrderType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOtomoActiveChangedDelegate, APalCharacter*, Otomo, bool, IsActive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCreatedCharacterContainer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDirectOrderTargetFeedbackDelegate, APalCharacter*, Target);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreatedCharacterContainer OnCreatedCharacterContainerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateOtomoSlotDelegate OnUpdateOtomoSlotDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateOtomoSlotDelegate OnUpdateOtomoSlotWithActorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateOtomoSlotWithInitializedParameterDelegate OnUpdateOtomoSlotWithInitializedParameterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateOtomoSlotWithInitializedParameterDelegate OnUpdateOtomoSlotWithCompletedInitializedParameterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOtomoSpawnedDelegate OnOtomoSpawnedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOtomoActiveChangedDelegate OnOtomoActiveChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOtomoOrderFeedbackDelegate OnOtomoOrderFeedbackDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectOrderTargetFeedbackDelegate OnDirectOrderTargetFeedbackDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterSlot*> PendingOtomoSlotUpdateSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> PendingOtomoSlotUpdateLastHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterSlot*> PendingPalLoadoutSlotUpdateSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> PendingPalLoadoutSlotUpdateLastHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalOtomoSpawnCollisionChecker* CollisionChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EPalOtomoPalOrderType OtomoOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* DirectOrderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DirectOrderSetCryEmoState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DirectOrderCancelCryEmoState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalOtomoPalOrderType, FName> OtomoOrderCryEmoStateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DashCryEmoState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashCryCT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashCryInputThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CharacterContainer, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterContainer* CharacterContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> CreatingHandleCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisableDespawnCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableDeadReturnOtomo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableReturnOtomo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReleaseContainerOnDestory;
    
public:
    UPalOtomoHolderComponentBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryRevivePlayerByPartnerSkill();
    
    UFUNCTION(BlueprintCallable)
    bool TryReviveOtomoByPartnerSkill(const APalCharacter* OtomoCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterHandle* TryGetSpawnedOtomoHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* TryGetSpawnedOtomo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* TryGetOwnerControlledPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* TryGetOwnerControlledCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* TryGetOtomoActorBySlotIndex(const int32 SlotIndex) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void TryGetLoadedOtomoData(bool& bLoaded, TMap<FPalInstanceID, FPalIndividualCharacterSaveParameter>& OutParameterMap);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    APalCharacter* TryGetCurrentSelectPalActor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetContainer(UPalIndividualCharacterContainer*& Container) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TryFixAssignNearestWorkSelectedOtomo(const AActor* HitActor);
    
    UFUNCTION(BlueprintCallable)
    void TryExecuteDirectAttackOrder();
    
    UFUNCTION(BlueprintCallable)
    void Tmp_EmptySlot(const FPalCharacterSlotId& SlotId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnOtomoByLoad(int32 SlotIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTrainerForOtomo(APalCharacter* Character);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetSelectOtomoID_ToServer(int32 ID, int32 Index);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetSelectOtomoID_ToALL(int32 ID, int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectOtomoID_Internal(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectOtomoID(int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetOtomoOrder_ToServer(EPalOtomoPalOrderType OrderType);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetInteractComponent(AActor* SpawnPal);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisableReturnOtomo(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableDeadReturnOtomo(bool bDisable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetDirectOrderTarget_ToServer(APalCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    void RequestSetOtomoOrder(EPalOtomoPalOrderType OrderType);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void PlayOtomoCry_ToClient(const FName& EmoState);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSlot(UPalIndividualCharacterSlot* Slot, UPalIndividualCharacterHandle* LastHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateIndividualActor(UPalIndividualCharacterHandle* LastHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateFriendshipRank(UPalIndividualCharacterParameter* IndividualParameter, const int32 NewFriendshipRank, const int32 OldRank, bool bFirstRankup);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnOtomoCallback_ServerInternal(FPalInstanceID ID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSpawnDebugOtomoCallback_ServerInternal(FPalInstanceID ID);
    
    UFUNCTION(BlueprintCallable)
    void OnReplicated_CharacterContainer_AllSlots(UPalIndividualCharacterContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterContainer();
    
    UFUNCTION(BlueprintCallable)
    void OnInitializedCharacter(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnDirectOrderTargetDestroyed(AActor* DestroyedActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCreatedCharacterContainer();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompletedAllCharacterInitialized(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeOtomoActive(APalCharacter* Otomo, bool IsActive);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyOtomoOrderFeedback_ToAll(EPalOtomoPalOrderType OrderType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyDirectOrderTargetFeedback_ToAll(APalCharacter* Target);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintPure=false)
    void LostOtomoByID_ToClient(FPalInstanceID ID) const;
    
    UFUNCTION(BlueprintCallable)
    void LostOtomoByID(FPalInstanceID ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsValidCurrentSelectPalActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsRidingBySpawnSlotID();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsRidingBySelectSlotID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullMember() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeadSelectedOtomo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreatedOtomoContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControlledByPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsALLEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllDeadOtomo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsActivatedSelectOtomo();
    
    UFUNCTION(BlueprintCallable)
    void Initialize_ServerInternal();
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void IncrementSelectOtomoID_ToServer(int32 ID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void IncrementSelectOtomoID_ToALL(int32 ID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IncrementSelectOtomoID_Internal();
    
    UFUNCTION(BlueprintCallable)
    void IncrementSelectOtomoID();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InactiveOtomoByHandle_PreProcess(UPalIndividualCharacterHandle* Handle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InactivateCurrentOtomo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InactivateAllOtomo();
    
protected:
    UFUNCTION(BlueprintCallable)
    FTransform GetTransform_SpawnPalNearTrainer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetSpawnedOtomoID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSlots(TArray<UPalIndividualCharacterSlot*>& Slots) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotIndexByIndividualHandle(const UPalIndividualCharacterHandle* IndividualHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetSelectedOtomoID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetPreviousOtomoSlotID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalOtomoPalOrderType GetOtomoOrder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterHandle* GetOtomoIndividualHandle(const int32 SlotIndex) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterSlot* GetOtomoIndividualCharacterSlot_Internal(const int32 SlotIndex) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterSlot* GetOtomoIndividualCharacterSlot(const int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOtomoCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetNextOtomoSlotID();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetMaxOtomoNum() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    APalCharacter* GetEnemyWhenOtomoThrow(FVector OtomoAppearedLocation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterSlot* GetEmptySlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetDirectOrderTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllIndividualHandle(TArray<UPalIndividualCharacterHandle*>& OutArray) const;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DecrementSelectOtomoID_ToServer(int32 ID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DecrementSelectOtomoID_ToALL(int32 ID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecrementSelectOtomoID_Internal();
    
    UFUNCTION(BlueprintCallable)
    void DecrementSelectOtomoID();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CoopCallCommand();
    
    UFUNCTION(BlueprintCallable)
    void CompleteInactiveCurrentOtomo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRevivePalByPartnerSkill(const APalCharacter* OtomoCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallCancelCommand();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddSphereRecoveryLog_ToClient(const FPalInstanceID& IndividualId, const FPalStaticItemIdAndNum& ItemAndNum);
    
    UFUNCTION(BlueprintCallable)
    bool AddOtomoHandleToFreeSlot(UPalIndividualCharacterHandle* Handle);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddLogOtomoPartnerSkill_Waza_ToClient(AActor* Otomo, EPalLogType PalLogType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddLogOtomoPartnerSkill_ToClient(AActor* Otomo, EPalLogType PalLogType, int32 Value, bool AddSkillName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddLogOtomoPartnerSkill_Text_ToClient(AActor* Otomo, FName TextId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddAlphaEggConversionLog_ToClient(const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivatePalByHandle(const UPalIndividualCharacterHandle* OtomoHandle, const FVector& Location, const FRotator& Rotation, bool bKeepActigvateOtomoId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ActivateCurrentOtomoNearThePlayer_ToServer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ActivateCurrentOtomoNearThePlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateCurrentOtomoFromBallNative(FTransform ballTransform, AActor* hitTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ActivateCurrentOtomo(FTransform SpawnTransform);
    
};

