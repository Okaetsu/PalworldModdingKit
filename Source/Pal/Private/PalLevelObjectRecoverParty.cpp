#include "PalLevelObjectRecoverParty.h"
#include "Net/UnrealNetwork.h"

APalLevelObjectRecoverParty::APalLevelObjectRecoverParty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->CooldownDuration = 60.00f;
    this->RecoveryStartLogTextId = TEXT("LOG_HealingSpring");
    this->SelfPlayerCooldownCheckProcessor = NULL;
    this->RecoveryPlayerCharacterNiagaraSystem = NULL;
    this->RecoveryPalCharacterNiagaraSystem = NULL;
}

void APalLevelObjectRecoverParty::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalLevelObjectRecoverParty::OnRep_CooldownEntries() {
}

void APalLevelObjectRecoverParty::OnCooldownEndSelfPlayer(UPalLevelObjectRecoveryPartyCooldownCheckProcessor* InProcessor) {
}

bool APalLevelObjectRecoverParty::IsOnCooldownSelfPlayer() const {
    return false;
}

void APalLevelObjectRecoverParty::ExecutedRecoveryPlayer_Multicast_Implementation(FGuid InPlayerUId, const TArray<APalCharacter*>& InRecoveredPalCharacters) {
}



void APalLevelObjectRecoverParty::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalLevelObjectRecoverParty, ReplicatedCooldownEntries);
}


