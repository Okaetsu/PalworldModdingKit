#include "PalDamageDisplayCanvas.h"
#include "Templates/SubclassOf.h"

UPalDamageDisplayCanvas::UPalDamageDisplayCanvas() {
}

void UPalDamageDisplayCanvas::SetupEvents() {
}

void UPalDamageDisplayCanvas::ReleaseDamageTextWidget(UPalUIDamageTextBase* Widget) {
}

void UPalDamageDisplayCanvas::ReceiveDamageEntries_Implementation(const TArray<FPalDamageDisplayEntry>& Entries) {
}

void UPalDamageDisplayCanvas::OnDamageDisplayTimer() {
}

void UPalDamageDisplayCanvas::OnAddDamagePopup(const FPalDamageInfo& DamageInfo, AActor* Defender) {
}

UPalUIDamageTextBase* UPalDamageDisplayCanvas::GetDamageTextWidget(TSubclassOf<UPalUIDamageTextBase> WidgetClass) {
    return NULL;
}

int32 UPalDamageDisplayCanvas::CalcDisplayDamage(const FPalDamageInfo& DamageInfo, AActor* Defender, float& outSpecialDamageRate, int32& weakCount, FPalCalculatedDamageInfo& OutCalculatedDamageInfo) {
    return 0;
}


