#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectEnergyStatusIndicatorModel.h"
#include "PalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalMapObjectConcreteModelModuleBase;
class UPalMapObjectGenerateEnergyModel;
class UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy : public UPalUIMapObjectEnergyStatusIndicatorModel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateOverHeatRatioDelegate, UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateOverHeatRatioDelegate OnUpdateOverHeatRatioDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalMapObjectConcreteModelBase> CachedConcreteModel;
    
public:
    UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateStoredEnergyAmount(UPalMapObjectGenerateEnergyModel* GenerateEnergyModel);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReadyOperationalLoadModule(UPalMapObjectConcreteModelBase* Model, UPalMapObjectConcreteModelModuleBase* InModule);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverHeatWarning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverHeated() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOverloadStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleCurrentLoadChanged(float LoadRatio);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverHeatRatio() const;
    
};

