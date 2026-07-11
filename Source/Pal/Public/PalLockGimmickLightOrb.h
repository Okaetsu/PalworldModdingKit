#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OnLightOrbArrivedDelegate.h"
#include "PalLockGimmickLightOrb.generated.h"

class UFloatingPawnMovement;
class UNiagaraSystem;
class USceneComponent;

UCLASS(Blueprintable)
class PAL_API APalLockGimmickLightOrb : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLightOrbArrived OnArrived;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFloatingPawnMovement* FloatingMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> OrbEffect;
    
public:
    APalLockGimmickLightOrb(const FObjectInitializer& ObjectInitializer);

};

