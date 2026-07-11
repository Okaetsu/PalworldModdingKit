#include "PalWildlifeSanctuarySubsystem.h"

UPalWildlifeSanctuarySubsystem::UPalWildlifeSanctuarySubsystem() {
    this->bShouldCreate = true;
}

void UPalWildlifeSanctuarySubsystem::ResisterWildlifeSanctuaryArea(APalWildlifeSanctuaryArea* Area) {
}

void UPalWildlifeSanctuarySubsystem::ResisterAlertStateListener(TScriptInterface<IPalWildlifeSanctuaryAlertStateListenerInterface> AlertInterface, const FVector& Location) {
}

void UPalWildlifeSanctuarySubsystem::NotifyPlayerDetected(APalPlayerCharacter* Player, const FVector& Location) {
}

APalWildlifeSanctuaryArea* UPalWildlifeSanctuarySubsystem::FindAreaByListener(UObject* Listener) const {
    return NULL;
}

APalWildlifeSanctuaryArea* UPalWildlifeSanctuarySubsystem::FindArea(const FVector& Location) {
    return NULL;
}


