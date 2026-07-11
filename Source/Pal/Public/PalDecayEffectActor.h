#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalDecayEffectActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class PAL_API APalDecayEffectActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DecayMeshComponent;
    
public:
    APalDecayEffectActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecayStart();
    
    UFUNCTION(BlueprintCallable)
    void FinishAndDestroy();
    
};

