#include "PalMapObjectWeakPointOre.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"

APalMapObjectWeakPointOre::APalMapObjectWeakPointOre(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->WeakPointDecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("WeakPointDecal"));
    this->WeakPointHitEffect = NULL;
    this->NonWeakPointHitSound = NULL;
    this->bEnableNightGlow = true;
    this->NightEmissiveIntensity = 5.00f;
    this->DayEmissiveIntensity = 0.00f;
    this->DecalDynamicMaterial = NULL;
    this->WeakPointDecalRenderStencilMaskValue = 64;
    this->WeakPointDecalShakeFollowRate = 1.00f;
    this->bUseWeakPointDecalShakeFollow = true;
    this->WeakPointDecalComponent->SetupAttachment(RootComponent);
}


void APalMapObjectWeakPointOre::OnWeakPointDirectionUpdated(UPalMapObjectWeakPointModule* Module) {
}

void APalMapObjectWeakPointOre::OnReadyWeakPointModule(UPalMapObjectConcreteModelBase* Model, UPalMapObjectConcreteModelModuleBase* Module) {
}

void APalMapObjectWeakPointOre::OnNightStart() {
}

void APalMapObjectWeakPointOre::OnNightEnd() {
}

bool APalMapObjectWeakPointOre::IsUseRejectedDamageEffect(const FPalDamageInfo& DamageInfo) const {
    return false;
}

UAkAudioEvent* APalMapObjectWeakPointOre::GetUniqueHitDamageSE(const FPalDamageInfo& DamageInfo) const {
    return NULL;
}

TSoftObjectPtr<UNiagaraSystem> APalMapObjectWeakPointOre::GetRejectDamageHitEffect() const {
    return NULL;
}


