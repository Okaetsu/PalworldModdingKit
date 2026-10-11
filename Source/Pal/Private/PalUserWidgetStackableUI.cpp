#include "PalUserWidgetStackableUI.h"

UPalUserWidgetStackableUI::UPalUserWidgetStackableUI() {
    this->OpenAkEvent = NULL;
    this->CloseAkEvent = NULL;
    this->bIgnoreOnPreGarbageCollect = false;
}

void UPalUserWidgetStackableUI::OnPreClose_Implementation() {
}

void UPalUserWidgetStackableUI::OnPostClose_Implementation() {
}

void UPalUserWidgetStackableUI::OnClose_Implementation() {
}

UAkAudioEvent* UPalUserWidgetStackableUI::GetOpenAkEvent() const {
    return NULL;
}

UAkAudioEvent* UPalUserWidgetStackableUI::GetCloseAkEvent() const {
    return NULL;
}

void UPalUserWidgetStackableUI::Close() {
}


