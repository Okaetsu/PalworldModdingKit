#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUIMapObjectRecyclerModel.generated.h"

class UPalItemContainer;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectConcreteModelModuleBase;
class UPalMapObjectItemContainerModule;
class UPalMapObjectRecyclerModel;
class UPalMapObjectSwitchModule;
class UPalUIMapObjectRecyclerModel;

UCLASS(Blueprintable)
class UPalUIMapObjectRecyclerModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIModelDelegate, const UPalUIMapObjectRecyclerModel*, UIModel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIModelDelegate OnUpdateSwitchDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIModelDelegate OnUpdateCurrentRelicItemDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIModelDelegate OnUpdateOutputContainerCautionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIModelDelegate OnUpdateBoostDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIModelDelegate OnUpdateInProgressBoostDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalMapObjectRecyclerModel> WeakRecyclerModel;
    
public:
    UPalUIMapObjectRecyclerModel();

    UFUNCTION(BlueprintCallable)
    bool TryGetConcreteModel(UPalMapObjectRecyclerModel*& Model);
    
    UFUNCTION(BlueprintCallable)
    void RequestSortRecyclerContainer();
    
    UFUNCTION(BlueprintCallable)
    void RequestSetPowerOn(bool bShouldBeOn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitch(UPalMapObjectSwitchModule* SwitchModule);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateItemContainerContents(UPalMapObjectItemContainerModule* Module);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateCurrentRecycleItem(UPalMapObjectRecyclerModel* Model);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateBoost(UPalMapObjectRecyclerModel* Model);
    
    UFUNCTION(BlueprintCallable)
    void OnReadySwitchModule(UPalMapObjectConcreteModelBase* Model, UPalMapObjectConcreteModelModuleBase* Module);
    
    UFUNCTION(BlueprintCallable)
    void OnReadyItemContainerModule(UPalMapObjectConcreteModelBase* Model, UPalMapObjectConcreteModelModuleBase* Module);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwitchOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecycleBoostBuffActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullOutputContainer() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UPalMapObjectRecyclerModel* InModel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemContainer* GetRelicItemContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRecycleBoostBuffRemainingTimeRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemContainer* GetOutputContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentRecycleItemId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBuildObjectName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemContainer* GetBoostItemContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanWork() const;
    
};

