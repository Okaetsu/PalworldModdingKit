#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPalFarmCropState.h"
#include "PalFarmCropGrowupProcessSet.h"
#include "PalMapObjectFarmCrop.generated.h"

class UCurveVector;
class UInstancedStaticMeshComponent;
class UNiagaraSystem;

UCLASS(Blueprintable)
class PAL_API APalMapObjectFarmCrop : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EPalFarmCropState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalFarmCropGrowupProcessSet> GrowupProcessSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* GrowupFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* StateChangeAnimTargetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveVector* StateChangeAnimCurve;
    
public:
    APalMapObjectFarmCrop(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState(EPalFarmCropState OldValue);
    
};

