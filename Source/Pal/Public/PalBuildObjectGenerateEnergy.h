#pragma once
#include "CoreMinimal.h"
#include "PalBuildObject.h"
#include "PalBuildObjectGenerateEnergy.generated.h"

class UPalWorkBase;

UCLASS(Blueprintable)
class APalBuildObjectGenerateEnergy : public APalBuildObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Generating, meta=(AllowPrivateAccess=true))
    bool bGenerating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OverHeatCooling, meta=(AllowPrivateAccess=true))
    bool bOverHeatCooling;
    
public:
    APalBuildObjectGenerateEnergy(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateWorkAssigned_ServerInternal(UPalWorkBase* Work);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartOverHeatCoolingWork();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartGenerate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OverHeatCooling(const bool bOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Generating(const bool bOldValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndOverHeatCoolingWork();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndGenerate();
    
};

