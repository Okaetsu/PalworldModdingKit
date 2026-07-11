#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "PalDimensionalDistortionSpawner.generated.h"

class APalDimensionalDistortionPawn;
class USceneComponent;
class USphereComponent;

UCLASS(Blueprintable)
class PAL_API APalDimensionalDistortionSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* DetectionRangeSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* WanderingRangeSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalDimensionalDistortionPawn> PawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnOnBeginPlay;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APalDimensionalDistortionPawn>> SpawnedPawns;
    
public:
    APalDimensionalDistortionSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    APalDimensionalDistortionPawn* SpawnDistortion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid SelectRandomWarpPointLocationId() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaxSpawnCountReached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USphereComponent* GetWanderingRangeSphere() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USphereComponent* GetDetectionRangeSphere() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSpawnCount() const;
    
    UFUNCTION(BlueprintCallable)
    void DespawnDistortion(APalDimensionalDistortionPawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void DespawnAllDistortions();
    
};

