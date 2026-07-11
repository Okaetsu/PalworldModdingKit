#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectRecyclerModelDelegateDelegate.h"
#include "PalWorkProgressWorkSpeedInterface.h"
#include "PalWorkProgressWorkableCheckInterface.h"
#include "PalMapObjectRecyclerModel.generated.h"

class UPalItemContainer;
class UPalMapObjectEnergyModule;
class UPalWorkBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectRecyclerModel : public UPalMapObjectConcreteModelBase, public IPalWorkProgressWorkableCheckInterface, public IPalWorkProgressWorkSpeedInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectRecyclerModelDelegate OnRecycleCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectRecyclerModelDelegate OnUpdateCurrentRecycleItemDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectRecyclerModelDelegate OnUpdateBoostDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectRecyclerModelDelegate OnUpdateProgressRecycleBoostDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentRelicItemId, meta=(AllowPrivateAccess=true))
    FName CurrentRecycleItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RecycleBoostBuffRemainingTime, meta=(AllowPrivateAccess=true))
    float RecycleBoostBuffRemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RecycleBoostSpeedMultiplier, meta=(AllowPrivateAccess=true))
    float RecycleBoostSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bInProgressRecycleBoost, meta=(AllowPrivateAccess=true))
    bool bInProgressRecycleBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BoostItemContainer, meta=(AllowPrivateAccess=true))
    UPalItemContainer* BoostItemContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RelicItemContainer, meta=(AllowPrivateAccess=true))
    UPalItemContainer* RelicItemContainer;
    
public:
    UPalMapObjectRecyclerModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void SetSwitchState_ServerInternal(const int32 RequestPlayerId, bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void RequestSortRecyclerContainer_ServerInternal(const int32 RequestPlayerId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateRelicContainerContent_ServerInternal(UPalItemContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateOutputContainerContent_ServerInternal(UPalItemContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateBoostContainerContent_ServerInternal(UPalItemContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void OnStartWorkAnyone_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& WorkerIndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RelicItemContainer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RecycleBoostSpeedMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RecycleBoostBuffRemainingTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentRelicItemId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BoostItemContainer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bInProgressRecycleBoost();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnEndWorkAnyone_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& WorkerIndividualId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwitchOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecycleBoostBuffActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemContainer* GetRelicItemContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRecycleBoostBuffRemainingTimeRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRecycleBoostBuffRemainingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemContainer* GetOutputContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentRelicItemId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemContainer* GetBoostItemContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanWork() const;
    

    // Fix for true pure virtual functions not being implemented
};

