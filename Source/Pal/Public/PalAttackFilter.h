#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPalAdditionalEffectType.h"
#include "EPalBlowVelocityOwner.h"
#include "EPalElementType.h"
#include "EPalWazaID.h"
#include "PalDamageInfo.h"
#include "PalHitFilter.h"
#include "PalAttackFilter.generated.h"

class AActor;
class UNiagaraSystem;
class UPalAttackFilter;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew)
class UPalAttackFilter : public UPalHitFilter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnAttackDelegate, AActor*, Defencer, FPalDamageInfo, DamageInfo, int32, HitCount, UPrimitiveComponent*, AttackerComponent);

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackDelegate OnAttackDelegate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWazaID Waza;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBlowVelocityOwner VelocityOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NativeBlowVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WazaPowerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSharedFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> OverrideHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalElementType OverrideElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAdditionalEffectType OverrideAdditionalEffectType1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAdditionalEffectType OverrideAdditionalEffectType2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCannotKill;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Attacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerActionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalAttackFilter* SharedFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsSharedFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> CallBackCollisions;
    
public:
    UPalAttackFilter();

    UFUNCTION(BlueprintCallable)
    void OverrideOwnerActionId(const FGuid& ActionID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetOwnerActionId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAttacker() const;
    
    UFUNCTION(BlueprintCallable)
    void CallBackOnAttackDelegate(AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, UPrimitiveComponent* AttackerComponent);
    
};

