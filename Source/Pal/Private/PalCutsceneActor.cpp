#include "PalCutsceneActor.h"

APalCutsceneActor::APalCutsceneActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OpeningFadeInDelay = 0.00f;
    this->OpeningFadeInTime = 0.00f;
    this->bCanSkip = true;
    this->bMuteSE = true;
    this->bMuteAllAudio = false;
    this->bFadeOutAndHoldOnFinish = false;
    this->FinishFadeOutTime = 1.00f;
    this->bRestoreSkyCreatorOnFinish = false;
    this->bHoldMuteOnFinish = false;
    this->CustomUIClass = NULL;
    this->bHideNearbyCharacters = false;
    this->HideActorRadius = 10000.00f;
    this->bHideAllBuildObjects = false;
    this->PrestreamTextureDurationSeconds = 0.00f;
    this->PrestreamTextureExtraDurationSeconds = 5.00f;
    this->PrestreamTextureWaitSeconds = 0.00f;
    this->bFastPrestreamTextures = true;
}

void APalCutsceneActor::SetTransformOrigin(const FTransform& TransformOrigin) {
}




UObject* APalCutsceneActor::GetSpawnedObjectByTag(FName BindingTag, UClass* ObjectClass) const {
    return NULL;
}

bool APalCutsceneActor::GetMarkedFrameTime(const FString& Label, float& OutTimeInSeconds, bool bSearchSubSequences) const {
    return false;
}

float APalCutsceneActor::GetCurrentTimeInSeconds() const {
    return 0.0f;
}

TArray<FName> APalCutsceneActor::GetBindingTagsByPrefix(const FString& Prefix) const {
    return TArray<FName>();
}

TArray<FName> APalCutsceneActor::GetAllBindingTags() const {
    return TArray<FName>();
}


