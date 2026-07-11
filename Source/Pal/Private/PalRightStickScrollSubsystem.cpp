#include "PalRightStickScrollSubsystem.h"

UPalRightStickScrollSubsystem::UPalRightStickScrollSubsystem() {
    this->DefaultScrollSpeed = 1000.00f;
    this->DefaultListViewScrollSpeed = 5.00f;
    this->DeadZone = 0.15f;
    this->DefaultNavInputsPerSecond = 20.00f;
}

void UPalRightStickScrollSubsystem::UnregisterScrollTarget(UWidget* Target) {
}

void UPalRightStickScrollSubsystem::SetScrollEnabled(bool bEnabled) {
}

void UPalRightStickScrollSubsystem::RegisterScrollTarget(UWidget* Target, float SpeedOverride, float NavInputsPerSecondOverride) {
}


