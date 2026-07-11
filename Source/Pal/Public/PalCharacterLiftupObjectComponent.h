#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "EPalCharacterLiftupObjectThrowState.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalCharacterLiftupObjectComponent.generated.h"

class AActor;
class APalPlayerCharacter;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCharacterLiftupObjectComponent : public UActorComponent, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalCharacterLiftupObjectThrowState ThrowState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableLiftup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalPlayerCharacter* LiftingPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowIgnorePlayerDuration;
    
public:
    UPalCharacterLiftupObjectComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetEnable(const bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapEndCageAreaWalls();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHitOwnerMainMesh(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLifting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetLastLiftRequestedPlayerUId() const;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastMarkThrowReleased();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastClearThrowState();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastBeginThrowPitching();
    

    // Fix for true pure virtual functions not being implemented
};

