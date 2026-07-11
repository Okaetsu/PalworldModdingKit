#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EPalCharacterMovementCustomMode.h"
#include "EPalFlyHeightType.h"
#include "FixedPoint64.h"
#include "PalDeadInfo.h"
#include "PalFlyMeshHeightCtrlComponent.generated.h"

class APalCharacter;
class UPalCharacterMovementComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalFlyMeshHeightCtrlComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlingAdditionalHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighFlingAddtionalHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHoverCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableRideLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoverExtendInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHoldFlyingCapsuleOnDismount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStopExtendByHeadHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugHoverCapsuleLog;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalFlyHeightType State;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsHighFling, meta=(AllowPrivateAccess=true))
    bool bIsHighFling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHighFlingCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSkipWildHighFlingForNPCOtomoSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabledBattleModeFlyingChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SK;
    
public:
    UPalFlyMeshHeightCtrlComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ToLand_All(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void ToLand(float Duration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ToFly_All(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void ToFly(float Duration);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetupMesh();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatePlayerHp(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsHighFling();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> PrevMode, TEnumAsByte<EMovementMode> NewMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void OnInitializedCharacter(APalCharacter* OwnerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnDead(FPalDeadInfo Info);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBattleMode(bool bIsBattleMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRideLandingDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlying() const;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void HighFlyingStart();
    
    UFUNCTION(BlueprintCallable)
    void HighFlingEnd_Server();
    
    UFUNCTION(BlueprintCallable)
    void HighFlingEnd_Implementation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void HighFlingEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultMeshLocationZ();
    
private:
    UFUNCTION(BlueprintCallable)
    void Debug_ForceHighFlingEnd();
    
    UFUNCTION(BlueprintCallable)
    void Debug_DisabledBattleModeFlyingChange();
    
};

