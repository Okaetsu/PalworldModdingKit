#pragma once
#include "CoreMinimal.h"
#include "EPalBreedStoppedReason.h"
#include "PalInstanceID.h"
#include "PalMapObjectItemContainerAccessDelegateDelegate.h"
#include "PalMapObjectItemContainerAccessInterface.h"
#include "PalMapObjectMultiHatchingEggModel.h"
#include "PalMapObjectMultiHatchingEggWithBreedModel.generated.h"

class UPalItemContainer;
class UPalWorkBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectMultiHatchingEggWithBreedModel : public UPalMapObjectMultiHatchingEggModel, public IPalMapObjectItemContainerAccessInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBreedProgressChangedDelegate, float, CurrentProgress, float, MaxProgress);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBreedProgressChangedDelegate OnUpdateBreedProgress;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_UpdateBreedProgress, meta=(AllowPrivateAccess=true))
    float BreedProgressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_UpdateBreedProgress, meta=(AllowPrivateAccess=true))
    float BreedRequiredRealTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalBreedStoppedReason BreedStoppedReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetBreedItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalInstanceID> LastProceedWorkerIndividualIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BreedItemContainer, meta=(AllowPrivateAccess=true))
    UPalItemContainer* BreedItemContainer;
    
public:
    UPalMapObjectMultiHatchingEggWithBreedModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestSortContainer_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateAssignedCharacter(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnUnassignedCharacter_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateBreedProgress();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BreedItemContainer();
    
    UFUNCTION(BlueprintCallable)
    void OnReassignedAfterSpawn_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasConsumableBreedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBreedStoppedReason GetBreedStoppedReason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBreedRequiredRealTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBreedProgressTime() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void UnregisterOnReadyItemContainerEvent(FPalMapObjectItemContainerAccessDelegate Delegate) override PURE_VIRTUAL(UnregisterOnReadyItemContainerEvent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopItemContainerReplication() override PURE_VIRTUAL(RequestStopItemContainerReplication,);
    
    UFUNCTION(BlueprintCallable)
    void RequestStartItemContainerReplication() override PURE_VIRTUAL(RequestStartItemContainerReplication,);
    
    UFUNCTION(BlueprintCallable)
    void RequestSortContainer_ItemContainerAccessInterface() override PURE_VIRTUAL(RequestSortContainer_ItemContainerAccessInterface,);
    
    UFUNCTION(BlueprintCallable)
    void RegisterOnReadyItemContainerEvent(FPalMapObjectItemContainerAccessDelegate Delegate) override PURE_VIRTUAL(RegisterOnReadyItemContainerEvent,);
    
    UFUNCTION(BlueprintCallable)
    UPalItemContainer* GetItemContainer_ItemContainerAccessInterface() const override PURE_VIRTUAL(GetItemContainer_ItemContainerAccessInterface, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDisplayContainerSlotNumDefault() override PURE_VIRTUAL(GetDisplayContainerSlotNumDefault, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnReadyItemContainerEvent(FPalMapObjectItemContainerAccessDelegate Delegate) override PURE_VIRTUAL(CallOrRegisterOnReadyItemContainerEvent,);
    
};

