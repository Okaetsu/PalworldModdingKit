#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "EPalDimensionalDistortionState.h"
#include "PalDimensionalDistortionPawn.generated.h"

class APalDimensionalDistortionSpawner;
class APalPlayerCharacter;
class UCapsuleComponent;
class UPalDimensionalDistortionMovementComponent;

UCLASS(Blueprintable)
class PAL_API APalDimensionalDistortionPawn : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalDimensionalDistortionMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelerationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid AssignedWarpPointLocationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalDimensionalDistortionSpawner> OwnerSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedState, meta=(AllowPrivateAccess=true))
    EPalDimensionalDistortionState ReplicatedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalPlayerCharacter> TeleportSessionTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasClientContact;
    
public:
    APalDimensionalDistortionPawn(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnTeleportSessionBegin_Multicast(APalPlayerCharacter* TargetPlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTeleportSessionBegin(APalPlayerCharacter* TargetPlayer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedState();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnTeleportExecuted(APalPlayerCharacter* TeleportedPlayer, FVector Destination);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CleanupPlayerRideStateForTeleport(APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWarpRotationZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWarpDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalPlayerCharacter* GetTeleportSessionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalPlayerCharacter* GetTargetPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetReturnLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalDimensionalDistortionState GetReplicatedState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalDimensionalDistortionSpawner* GetOwnerSpawner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalDimensionalDistortionMovementComponent* GetDistortionMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCollisionRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCapsuleComponent* GetCollisionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetAssignedWarpPointLocationId() const;
    
};

