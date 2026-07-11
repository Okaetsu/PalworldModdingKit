#include "PalLevelObject_LockedObstacle.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

APalLevelObject_LockedObstacle::APalLevelObject_LockedObstacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bLocked = true;
}

void APalLevelObject_LockedObstacle::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalLevelObject_LockedObstacle::OnRep_bLocked() {
}


void APalLevelObject_LockedObstacle::EventOnGimmickStateChanged(const FGuid& GimmickId, bool bCleared) {
}

void APalLevelObject_LockedObstacle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalLevelObject_LockedObstacle, bLocked);
}


