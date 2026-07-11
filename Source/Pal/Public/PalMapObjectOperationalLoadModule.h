#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectOperationalLoadModule.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectOperationalLoadModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOverloadStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOverloadEnded);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadWarning, float, LoadRatio);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadReductionRequired, float, LoadRatio);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrentLoadChanged, float, LoadRatio);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentLoadChanged OnCurrentLoadChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadWarning OnLoadWarning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadReductionRequired OnLoadReductionRequired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverloadStarted OnOverloadStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverloadEnded OnOverloadEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentLoad, meta=(AllowPrivateAccess=true))
    float CurrentLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bIsOverloaded, meta=(AllowPrivateAccess=true))
    bool bIsOverloaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LoadAccumulationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LoadReductionPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WarningThresholdRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LoadReductionThresholdRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWarningTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLoadReductionTriggered;
    
public:
    UPalMapObjectOperationalLoadModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentLoad();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsOverloaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsLoadReduction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverloaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLoadRatio() const;
    
};

