#pragma once
#include "CoreMinimal.h"
#include "EPalEnergyType.h"
#include "PalBaseCampEnergyGeneratorInterface.h"
#include "PalBaseCampEnergyStorageInterface.h"
#include "PalInstanceID.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalOverHeatCoolingWorkOwnerInterface.h"
#include "PalMapObjectGenerateEnergyModel.generated.h"

class UPalMapObjectGenerateEnergyModel;
class UPalWorkBase;
class UPalWorkOnlyJoin;

UCLASS(Blueprintable)
class UPalMapObjectGenerateEnergyModel : public UPalMapObjectConcreteModelBase, public IPalBaseCampEnergyGeneratorInterface, public IPalBaseCampEnergyStorageInterface, public IPalOverHeatCoolingWorkOwnerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateEnergyAmountDelegate, UPalMapObjectGenerateEnergyModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateEnergyAmountDelegate OnUpdateStoredEnergyAmountDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOverHeatCoolingInProgress;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bHasOperationalLoadModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalEnergyType EnergyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float GenerateEnergyRateByWorker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float MaxEnergyStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StoredEnergyAmount, meta=(AllowPrivateAccess=true))
    float StoredEnergyAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ConsumeEnergySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ObtainExpByGenerateEnergy;
    
public:
    UPalMapObjectGenerateEnergyModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateAssignedCharacter_ServerInternal(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnTickCharacterWorkWait_ServerInternal(UPalWorkOnlyJoin* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnStartOverHeatCoolingWork_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StoredEnergyAmount();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndOverHeatCoolingWork_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnDisposeOverHeatCoolingWork_ServerInternal(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void HandleOverloadStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleOverloadEnded();
    
    UFUNCTION(BlueprintCallable)
    void HandleLoadReductionRequired(float LoadRatio);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStoredEnergyAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxEnergyStorage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalEnergyType GetEnergyType() const;
    

    // Fix for true pure virtual functions not being implemented
};

