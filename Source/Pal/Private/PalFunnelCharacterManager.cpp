#include "PalFunnelCharacterManager.h"
#include "Templates/SubclassOf.h"

UPalFunnelCharacterManager::UPalFunnelCharacterManager() {
}

bool UPalFunnelCharacterManager::SpawnFunnelAndFire(APalCharacter* ActionPal, APalCharacter* OwnerPal, TSubclassOf<APalFunnelCharacter> FunnelClass, TSubclassOf<AController> FunnelControllerClass, EPalWazaID WazaToFire, FVector SpawnOffset, FVector TargetLocation) {
    return false;
}

void UPalFunnelCharacterManager::SpawnActorCallback(const FGuid& Guid, AActor* Actor) {
}


void UPalFunnelCharacterManager::OnPendingFireRequest(const FGuid& Guid, APalCharacter* ownerCharacer) {
}



APalCharacter* UPalFunnelCharacterManager::GetOwnerCharacter(const APalFunnelCharacter* FunnelCharacter) const {
    return NULL;
}

int32 UPalFunnelCharacterManager::GetIndexOfFunnelsWithinSameTrainer(APalFunnelCharacter* FunnelCharacter) const {
    return 0;
}

APalFunnelCharacter* UPalFunnelCharacterManager::GetFunnelCharacterByOwner(APalCharacter* Owner) const {
    return NULL;
}


