#include "PalCutsceneComponent.h"
#include "Templates/SubclassOf.h"

UPalCutsceneComponent::UPalCutsceneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CutsceneActor = NULL;
    this->SkipHandler = NULL;
    this->FadeParam = NULL;
    this->FinishFadeParam = NULL;
}

void UPalCutsceneComponent::UpdateSkipCount_ToClient_Implementation(int32 SkipCount, int32 TotalCount) {
}

void UPalCutsceneComponent::StopCutsceneToServer_Implementation() {
}

void UPalCutsceneComponent::StopCutscene() {
}

void UPalCutsceneComponent::StartFinishFadeOut() {
}

void UPalCutsceneComponent::StartFadeIn() {
}

void UPalCutsceneComponent::StartAllPlayersSkipMode_ToClient_Implementation(int32 InTotalCount) {
}

APalCutsceneActor* UPalCutsceneComponent::SpawnCutsceneActor(TSubclassOf<APalCutsceneActor> CutsceneActorClass, FVector Location, FRotator Rotation, AActor* Owner) {
    return NULL;
}

void UPalCutsceneComponent::SetSkipHandler(UPalCutsceneSkipHandler* InHandler) {
}

void UPalCutsceneComponent::SetCanSkip(bool bInCanSkip) {
}

void UPalCutsceneComponent::RequestAllPlayersSkip_ToServer_Implementation() {
}

void UPalCutsceneComponent::PlayCutsceneToServer_Implementation() {
}

void UPalCutsceneComponent::PlayCutscene(APalCutsceneActor* InCutsceneActor, bool IsAutoDestroy, bool bInAllPlayersSkipMode) {
}

void UPalCutsceneComponent::OnFinished() {
}

void UPalCutsceneComponent::OnEndFinishFadeOut() {
}

void UPalCutsceneComponent::OnEndFadeIn() {
}

void UPalCutsceneComponent::NotifyCutsceneFinished_ToServer_Implementation() {
}

bool UPalCutsceneComponent::IsPlayingCutscene() const {
    return false;
}

void UPalCutsceneComponent::HideAdditionalActors(const TArray<AActor*>& Actors) {
}

float UPalCutsceneComponent::GetRemainingSeconds() const {
    return 0.0f;
}

void UPalCutsceneComponent::ForceStopCutscene_ToClient_Implementation() {
}

void UPalCutsceneComponent::AddPlaybackTimeSeconds(float DeltaTimeInSeconds) {
}


