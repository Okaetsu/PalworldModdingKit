#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "PalSporeFieldVolumeBase.generated.h"

class APalExplosiveSporePawnBase;
class APawn;
class UBoxComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class PAL_API APalSporeFieldVolumeBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalExplosiveSporePawnBase> SporeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnPointCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnSeedCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> SpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeSpawnPointsInBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnInnerMarginCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnPerBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarningRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DespawnPerBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActiveVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ExplodedFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APalExplosiveSporePawnBase*> ActiveSpores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ActivePointIndices;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<APalExplosiveSporePawnBase>> WarningSporesPrev;
    
public:
    APalSporeFieldVolumeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActiveVolume(bool bNewActive);
    
    UFUNCTION(BlueprintCallable)
    void NotifyExploded(int32 PointIndex, APawn* SporePawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetManagerCheckLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void Editor_ShowSpawnPoints();
    
    UFUNCTION(BlueprintCallable)
    void Editor_HideSpawnPoints();
    
    UFUNCTION(BlueprintCallable)
    void Editor_GenerateSpawnPoints();
    
    UFUNCTION(BlueprintCallable)
    void Editor_DebugDrawSpawnPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DebugDrawSpawnPoints(float Duration, float Radius) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnVolumeDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnVolumeActivated();
    
};

