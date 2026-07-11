#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalAttackType.h"
#include "PalDamageInfo.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectWeakPointModuleDelegateDelegate.h"
#include "PalMapObjectWeakPointModule.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectWeakPointModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectWeakPointModuleDelegate OnWeakPointDirectionUpdatedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WeakPointDirection, meta=(AllowPrivateAccess=true))
    FVector WeakPointDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float HitAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<EPalAttackType> AllowAttackTypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxNonRegularDamage;
    
public:
    UPalMapObjectWeakPointModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_WeakPointDirection();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegularDamage(const FPalDamageInfo& DamageInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWeakPointDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNonRegularDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHitAngleThreshold() const;
    
};

