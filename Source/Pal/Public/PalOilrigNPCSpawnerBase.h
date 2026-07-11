#pragma once
#include "CoreMinimal.h"
#include "EPalOilrigNPCSpawnerCheckResultType.h"
#include "EPalOilrigType.h"
#include "PalLevelObjectActor.h"
#include "PalOilrigHandledActorInterface.h"
#include "PalOilrigNPCSpawnerBase.generated.h"

class APalCharacter;
class UPalIndividualCharacterHandle;
class UPalSquad;

UCLASS(Blueprintable)
class PAL_API APalOilrigNPCSpawnerBase : public APalLevelObjectActor, public IPalOilrigHandledActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRunOnAnyThread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalOilrigType SelfOilrigType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSquad* Squad;
    
public:
    APalOilrigNPCSpawnerBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void Tick_Spawning(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Tick_Spawned(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Tick_Despawning(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSpawnedFlag(bool bInIsSpawned);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestDespawn();
    
public:
    UFUNCTION(BlueprintCallable)
    void Request_TickSpawningForGameThread(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Request_TickSpawnedForGameThread(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Request_TickDespawningForGameThread(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetOilrig_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeOneNPCCombatMode(APalCharacter* Character, bool IsCombat);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyWipedOut();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWipedOut();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawned() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetAllSpawnedNPCHandle(TArray<UPalIndividualCharacterHandle*>& Handles);
    
    UFUNCTION(BlueprintCallable)
    EPalOilrigNPCSpawnerCheckResultType CheckSpawnDistance(bool NewIsSpawned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintTick_Spawning(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintTick_Spawned(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintTick_Despawning(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void AddCharacterToGroup(UPalIndividualCharacterHandle* Handle);
    

    // Fix for true pure virtual functions not being implemented
};

