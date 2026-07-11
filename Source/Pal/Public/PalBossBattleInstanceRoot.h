#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalBossType.h"
#include "PalBossBattleInstanceRoot.generated.h"

class APalCharacter;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class PAL_API APalBossBattleInstanceRoot : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBossSpawnedDelegate, APalCharacter*, SpawnedCharacter);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBossBattleDifficulty Difficulty;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBossSpawnedDelegate OnBossSpawnedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBossType BossType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
public:
    APalBossBattleInstanceRoot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnBossSpawner(EPalBossType InBossType, int32 JoinPlayerNum, bool bIgnoreSpawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetBossLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FBox GetStageAreaBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FTransform GetSequencerTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FTransform GetPlayerStartTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FTransform GetPalBoxSpawnTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBossType GetBossType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckLevelLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BossSpawned(APalCharacter* SpawnedCharacter);
    
};

