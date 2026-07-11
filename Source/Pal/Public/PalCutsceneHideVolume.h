#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "PalCutsceneHideVolume.generated.h"

class APalWeaponBase;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class PAL_API APalCutsceneHideVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComp;
    
public:
    APalCutsceneHideVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRadius(float InRadius);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponSpawnedForLoadout(APalWeaponBase* NewWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponPlacedOnCharacter(AActor* PlacedSubActor);
    
    UFUNCTION(BlueprintCallable)
    void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(float InRadius, bool bEnableOverlapCapture);
    
    UFUNCTION(BlueprintCallable)
    void AddHiddenActors(const TArray<AActor*>& Actors);
    
};

