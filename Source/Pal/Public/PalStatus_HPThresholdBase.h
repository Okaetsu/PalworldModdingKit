#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalVisualEffectID.h"
#include "FixedPoint64.h"
#include "PalPassiveSkillEffect.h"
#include "PalStatusBase.h"
#include "PalStatusPassiveEffectQueryInterface.h"
#include "PalStatus_HPThresholdBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UPalStatus_HPThresholdBase : public UPalStatusBase, public IPalStatusPassiveEffectQueryInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPassiveSkillEffectType TargetEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalVisualEffectID VisualEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EffectActive, meta=(AllowPrivateAccess=true))
    bool bEffectActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalPassiveSkillEffect> ActiveEffectList;
    
public:
    UPalStatus_HPThresholdBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EffectActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_OnHPThresholdVfxRefreshed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_OnHPThresholdVfxOn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_OnHPThresholdVfxOff();
    

    // Fix for true pure virtual functions not being implemented
};

