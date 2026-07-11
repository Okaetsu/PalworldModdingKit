#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalDamageInfo.h"
#include "PalMapObject.h"
#include "PalMapObjectWeakPointOre.generated.h"

class UAkAudioEvent;
class UDecalComponent;
class UMaterialInstanceDynamic;
class UNiagaraSystem;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectConcreteModelModuleBase;
class UPalMapObjectWeakPointModule;

UCLASS(Blueprintable)
class PAL_API APalMapObjectWeakPointOre : public APalMapObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* WeakPointDecalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalMapObjectWeakPointModule> CachedWeakPointModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* WeakPointHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> RejectDamageHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NonWeakPointHitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableNightGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NightEmissiveIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DayEmissiveIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DecalDynamicMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeakPointDecalRenderStencilMaskValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeakPointDecalShakeFollowRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWeakPointDecalShakeFollow;
    
public:
    APalMapObjectWeakPointOre(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeakPointSurfaceUpdated(FVector RelativeLocation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWeakPointDirectionUpdated(UPalMapObjectWeakPointModule* Module);
    
    UFUNCTION(BlueprintCallable)
    void OnReadyWeakPointModule(UPalMapObjectConcreteModelBase* Model, UPalMapObjectConcreteModelModuleBase* Module);
    
    UFUNCTION(BlueprintCallable)
    void OnNightStart();
    
    UFUNCTION(BlueprintCallable)
    void OnNightEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseRejectedDamageEffect(const FPalDamageInfo& DamageInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkAudioEvent* GetUniqueHitDamageSE(const FPalDamageInfo& DamageInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UNiagaraSystem> GetRejectDamageHitEffect() const;
    
};

