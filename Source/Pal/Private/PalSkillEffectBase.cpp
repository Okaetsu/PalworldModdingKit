#include "PalSkillEffectBase.h"
#include "Templates/SubclassOf.h"

APalSkillEffectBase::APalSkillEffectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectSize = 1.00f;
    this->MinSize = 0.10f;
    this->MaxSize = 9999.00f;
    this->LifeTime = 15.00f;
    this->MaxActiveInstancesByClass = 0;
    this->bUseObjectPool = false;
    this->ObjectPoolSize = 64;
    this->bIsInactiveInObjectPool = false;
    this->AttackFilter = NULL;
    this->HitFilterGround = NULL;
    this->HitFilterCustomRange = NULL;
    this->AttackTarget = NULL;
    this->SoundPlayer = NULL;
}

void APalSkillEffectBase::StopAllNiagaraSound() {
}

void APalSkillEffectBase::StopAkSound() {
}

APalSkillEffectBase* APalSkillEffectBase::SpawnSkillEffectWithPool(const UObject* WorldContextObject, TSubclassOf<APalSkillEffectBase> EffectClass, FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod collisionMethod, AActor* OwnerActor, APawn* InstigatorPawn) {
    return NULL;
}

FTimerHandle APalSkillEffectBase::SetTimeCallbackBySkillEffectSpawnParameter(const UObject* WorldContextObject, const FSkillEffectSpawnParameter& Parameter, UObject* callObject, FSkillEffectTimeDelegate timeDelegate) {
    return FTimerHandle{};
}

void APalSkillEffectBase::SetActorTransformByOwner(const AActor* SkillOwner, const FVector& MyOffset) {
}

void APalSkillEffectBase::SetActionTargetActor(AActor* Target) {
}

void APalSkillEffectBase::PlayAkSound(UAkAudioEvent* AudioEvent) {
}


void APalSkillEffectBase::LifeTimeCallback() {
}

bool APalSkillEffectBase::IsSelfOwnerCharacterOrRaider(AActor* hitTarget) {
    return false;
}

bool APalSkillEffectBase::IsRidden() {
    return false;
}

void APalSkillEffectBase::Initialize(const AActor* SkillOwner, const FVector& MyOffset, AActor* Target, FRandomStream NewRandomStream) {
}

APalCharacter* APalSkillEffectBase::GetOwnerCharacter() const {
    return NULL;
}

FVector APalSkillEffectBase::GetActionTargetLocation() const {
    return FVector{};
}

AActor* APalSkillEffectBase::GetActionTargetActor() const {
    return NULL;
}

void APalSkillEffectBase::FinishSkillEffect() {
}

APalSkillEffectBase* APalSkillEffectBase::CreateChildSkillEffect(TSubclassOf<APalSkillEffectBase> EffectClass, FTransform SpawnTransform, FRandomStream NewRandomStream, ESpawnActorCollisionHandlingMethod collisionMethod, AActor* ownerActor) {
    return NULL;
}


