#include "PalLevelGimmick_AreaBarrier_Lock.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

APalLevelGimmick_AreaBarrier_Lock::APalLevelGimmick_AreaBarrier_Lock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->InteractLongPushTimeSec = 3.00f;
    this->InteractActionClass = NULL;
}

void APalLevelGimmick_AreaBarrier_Lock::SpawnerSetOverrideInfo_ServerInternal(FGuid InLockId, FGuid InRelatedVolumeId) {
}

void APalLevelGimmick_AreaBarrier_Lock::OnRep_SpawnerOverrideInfo() {
}


FGuid APalLevelGimmick_AreaBarrier_Lock::GetRelatedVolumeId() const {
    return FGuid{};
}

FGuid APalLevelGimmick_AreaBarrier_Lock::GetLockId() const {
    return FGuid{};
}

void APalLevelGimmick_AreaBarrier_Lock::EventOnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalLevelGimmick_AreaBarrier_Lock::EventOnStartInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalLevelGimmick_AreaBarrier_Lock::EventOnPlayerDamaged(FPalDamageResult DamageResult) {
}

void APalLevelGimmick_AreaBarrier_Lock::EventOnLockStateChanged(const FName InLockId, bool bFlag) {
}

void APalLevelGimmick_AreaBarrier_Lock::EventOnEndInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalLevelGimmick_AreaBarrier_Lock::EventOnCompleteSyncPlayer(APalPlayerState* PlayerState) {
}

void APalLevelGimmick_AreaBarrier_Lock::EventOnActiveVolumeChanged(const FGuid& VolumeId, bool bActivated) {
}

void APalLevelGimmick_AreaBarrier_Lock::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalLevelGimmick_AreaBarrier_Lock, SpawnerOverrideInfo);
}


