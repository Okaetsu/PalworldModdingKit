#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "EPalDimensionalDistortionState.h"
#include "OnDistortionMoveCompletedDelegate.h"
#include "OnDistortionStateChangedDelegate.h"
#include "PalDimensionalDistortionAIController.generated.h"

class AActor;
class APalDimensionalDistortionSpawner;
class APalPlayerCharacter;

UCLASS(Blueprintable)
class PAL_API APalDimensionalDistortionAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDistortionMoveCompleted OnMoveCompletedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDistortionStateChanged OnStateChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalDimensionalDistortionState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultWanderingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportTriggerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePathfinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPartialPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalPlayerCharacter> CurrentTargetPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMoveInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalDimensionalDistortionSpawner> OwnerSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContactDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalPlayerCharacter> LastTeleportedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WanderingDestinationInterval;
    
public:
    APalDimensionalDistortionAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTargetPlayer();
    
    UFUNCTION(BlueprintCallable)
    void SetAcceptanceRadius(float NewRadius);
    
    UFUNCTION(BlueprintCallable)
    void MoveToTargetLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void MoveToTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetInRange(AActor* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWanderingRadiusFromSpawner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSpawnerLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalDimensionalDistortionSpawner* GetOwnerSpawner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionRadiusFromSpawner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalPlayerCharacter* GetCurrentTargetPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalDimensionalDistortionState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAcceptanceRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalPlayerCharacter* FindNearestPlayerInRadius(float SearchRadius) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalPlayerCharacter* FindNearestPlayer() const;
    
};

