#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "EPalWarpPointState.h"
#include "OnWarpCompletedDelegate.h"
#include "OnWarpPointUnlockStateChangedDelegate.h"
#include "PalInteractableLevelObjectInterface.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelObjectActor.h"
#include "PalLevelObjectWarpPointToLocation.generated.h"

class AActor;
class APalPlayerState;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UNiagaraComponent;
class UNiagaraSystem;
class UPalLevelObjectWarpPointActivateConditionBase;
class UPalLevelObjectWarpPointToLocationPerformanceBase;

UCLASS(Blueprintable)
class PAL_API APalLevelObjectWarpPointToLocation : public APalLevelObjectActor, public IPalInteractiveObjectIndicatorInterface, public IPalInteractableLevelObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SourceDestinationLevelObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> WarpEffectSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalInteractiveObjectComponentInterface> InteractComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle IndicatorTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle WarpConfirmDialogTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalLevelObjectWarpPointToLocationPerformanceBase* Performance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalLevelObjectWarpPointActivateConditionBase* ActivateCondition;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWarpCompleted OnWarpCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWarpPointUnlockStateChanged OnUpdateUnlockStateDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UNiagaraComponent> ActiveWarpEffectComponent;
    
public:
    APalLevelObjectWarpPointToLocation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlayWarpEffect();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveWarpConfirmResult(const bool bResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFailedCheckCondition_InServer(const FGuid& PlayerUId) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteSyncPlayer(APalPlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetWarpTargetTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalWarpPointState GetWarpPointState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetSourceDestinationLevelObjectId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalLevelObjectWarpPointToLocationPerformanceBase* GetPerformance() const;
    

    // Fix for true pure virtual functions not being implemented
};

