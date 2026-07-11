#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "PalJetpackGliderComponent.generated.h"

class APalWeaponBase;
class UPalActionMovementMode_JetpackGlider;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalJetpackGliderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartJetpackGliding);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnJetpackFuelRecoveryCompleted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndJetpackGliding);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartJetpackGliding OnStartJetpackGlidingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndJetpackGliding OnEndJetpackGlidingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJetpackFuelRecoveryCompleted OnJetpackFuelRecoveryCompletedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionMovementMode_JetpackGlider> JetpackActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseStaminaCostPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostStaminaCostPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AscentPenaltyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DescentReductionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumJetpackGlideDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsBoosting, meta=(AllowPrivateAccess=true))
    bool bIsBoostingReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsJetpackGliding, meta=(AllowPrivateAccess=true))
    bool bIsJetpackGliding;
    
public:
    UPalJetpackGliderComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateFlightState(float PitchAngle, bool bHasPitchInput);
    
    UFUNCTION(BlueprintCallable)
    void StartJetpackGliding();
    
    UFUNCTION(BlueprintCallable)
    void StartBoost();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetBoostReplicated_ToServer(bool bNewBoosting);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponChanged(APalWeaponBase* NewWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsJetpackGliding();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsBoosting();
    
    UFUNCTION(BlueprintCallable)
    void OnJetpackShootingChanged(bool IsShooting);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingFuelSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThresoldItemComsumed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJetpackGliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJetpackForceCenterCameraEnabled(float& OutInterpSpeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJetpackFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipJetpackGlider() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBoostingReplicated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBoosting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFuelDisplayPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoostStaminaCostPerSecond() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseStaminaCostPerSecond() const;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void EndJetpackGliding_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndJetpackGliding();
    
    UFUNCTION(BlueprintCallable)
    void EndBoost();
    
    UFUNCTION(BlueprintCallable)
    bool ConsumeFuel(float Amount);
    
    UFUNCTION(BlueprintCallable)
    bool ConsumeBoostItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartJetpackGliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEndJetpackGliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateStaminaCost() const;
    
};

