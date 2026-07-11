#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalLevelObject_LockGimmickBase.h"
#include "PalLevelObject_LockGimmickTargetDestruction.generated.h"

class APalLockGimmickLightOrb;
class UPalMapObjectModel;
class USplineComponent;

UCLASS(Blueprintable)
class PAL_API APalLevelObject_LockGimmickTargetDestruction : public APalLevelObject_LockGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName targetMapObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TargetSpawnLocalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExistingTargetSearchExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalLockGimmickLightOrb> LightOrbClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightOrbMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightOrbInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bTargetDestroyed, meta=(AllowPrivateAccess=true))
    bool bTargetDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bLightOrbArrived, meta=(AllowPrivateAccess=true))
    bool bLightOrbArrived;
    
public:
    APalLevelObject_LockGimmickTargetDestruction(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetDestroyedBP();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDestroyed(UPalMapObjectModel* DestroyedModel);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bTargetDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bLightOrbArrived();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLightOrbArrivedBP();
    
    UFUNCTION(BlueprintCallable)
    void OnLightOrbArrived();
    
};

