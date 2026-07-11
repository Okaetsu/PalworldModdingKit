#include "PalLevelObject_LockGimmickBase.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

APalLevelObject_LockGimmickBase::APalLevelObject_LockGimmickBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bCleared = false;
}

void APalLevelObject_LockGimmickBase::OnRep_bCleared() {
}

void APalLevelObject_LockGimmickBase::OnGimmickCleared_Implementation() {
}


void APalLevelObject_LockGimmickBase::MarkAsCleared() {
}

bool APalLevelObject_LockGimmickBase::IsCleared() const {
    return false;
}

void APalLevelObject_LockGimmickBase::EventOnGimmickStateChanged(const FGuid& GimmickId, bool bInCleared) {
}

void APalLevelObject_LockGimmickBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalLevelObject_LockGimmickBase, bCleared);
}


