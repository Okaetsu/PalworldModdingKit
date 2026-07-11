#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/DataTable.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalInteractableLevelObjectInterface.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelObjectActor.h"
#include "PalLevelObjectItemRequiredWarpBarrier.generated.h"

class AActor;
class ALevelSequenceActor;
class APalPlayerState;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UArrowComponent;
class UBoxComponent;
class ULevelSequence;
class UNiagaraComponent;
class UNiagaraSystem;
class UPalItemContainer;

UCLASS(Blueprintable)
class PAL_API APalLevelObjectItemRequiredWarpBarrier : public APalLevelObjectActor, public IPalInteractiveObjectIndicatorInterface, public IPalInteractableLevelObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> RequiredItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> WalkingSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> BarrierEffectNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> BarrierEffectPassable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNormalEffectEmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalEffectEmissionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePassableEffectEmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassableEffectEmissionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle IndicatorTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle IndicatorTextIdBackward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ConfirmDialogTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipConfirmDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InsufficientItemMessageTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference ForwardInteractRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference BackwardInteractRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BlockingCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* TeleportArrow_Forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* TeleportArrow_Backward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UArrowComponent*> TeleportArrows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* BarrierEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IPalInteractiveObjectComponentInterface>> InteractComps;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* SequenceActor;
    
public:
    APalLevelObjectItemRequiredWarpBarrier(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateObservedInventoryContainer(UPalItemContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateObservedBossDefeatFlag(FName Key, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmWarpDialog(const bool bResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConfirmLockedDialog(const bool bResult);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteSyncPlayer(APalPlayerState* PlayerState);
    

    // Fix for true pure virtual functions not being implemented
};

