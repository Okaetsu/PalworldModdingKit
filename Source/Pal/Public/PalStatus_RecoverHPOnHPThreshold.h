#pragma once
#include "CoreMinimal.h"
#include "EPalVisualEffectID.h"
#include "FixedPoint64.h"
#include "PalPassiveSkillEffect.h"
#include "PalStatusBase.h"
#include "PalStatus_RecoverHPOnHPThreshold.generated.h"

UCLASS(Blueprintable)
class UPalStatus_RecoverHPOnHPThreshold : public UPalStatusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalVisualEffectID VisualEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalPassiveSkillEffect> ActiveEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bOnCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CooldownRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastRawDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastPrevHP;
    
public:
    UPalStatus_RecoverHPOnHPThreshold();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    
    UFUNCTION(BlueprintCallable)
    void OnRawDamageHP(int32 RawDamage, int32 PrevHP);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_OnRecoverHPVfxTrigger();
    
};

