#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "PalMapObject.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectAutoDecayOnDamag.generated.h"

class AActor;
class APalDecayEffectActor;
class UPalMapObjectDetectCharacterSphereComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class PAL_API APalMapObjectAutoDecayOnDamag : public APalMapObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalMapObjectDetectCharacterSphereComponent* DetectSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalDecayEffectActor> DecayEffectActorClass;
    
public:
    APalMapObjectAutoDecayOnDamag(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartDecayEffect();
    
};

