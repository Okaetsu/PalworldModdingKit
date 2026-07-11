#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "EPalWildlifeSanctuaryAlertState.h"
#include "PalDamageResult.h"
#include "PalWildlifeSanctuaryArea.generated.h"

class APalCharacter;
class APalPlayerCharacter;
class IPalWildlifeSanctuaryAlertStateListenerInterface;
class UPalWildlifeSanctuaryAlertStateListenerInterface;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class APalWildlifeSanctuaryArea : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* Sphere;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=On_CurrentAlertState, meta=(AllowPrivateAccess=true))
    EPalWildlifeSanctuaryAlertState CurrentAlertState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> InPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> DetectedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatBufferDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IPalWildlifeSanctuaryAlertStateListenerInterface>> Listeners;
    
public:
    APalWildlifeSanctuaryArea(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDroneReceivedDamage(FPalDamageResult DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void On_CurrentAlertState();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyPlayerDetected(APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationInsideCombatZone(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationInside(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APalPlayerCharacter*> GetInPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APalPlayerCharacter*> GetDetectedPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCombatRange() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* FindDroneAimTarget(APalCharacter* DroneActor, float Range, AActor* CurrentTarget);
    
};

