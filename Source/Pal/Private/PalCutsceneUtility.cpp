#include "PalCutsceneUtility.h"
#include "Templates/SubclassOf.h"

UPalCutsceneUtility::UPalCutsceneUtility() {
}

APalCharacter* UPalCutsceneUtility::SpawnCharacterForCutscene(const UObject* WorldContextObject, TSubclassOf<APalCharacter> CharacterClass, const FTransform& SpawnTransform) {
    return NULL;
}

void UPalCutsceneUtility::SetupCutsceneIdleAnimation(const TArray<FPalCutsceneEndingPalPlacement>& Placements) {
}

TArray<FPalCutsceneEndingPalPlacement> UPalCutsceneUtility::ParseEndingPalTags(const TArray<FName>& BindingTags, const FString& Prefix) {
    return TArray<FPalCutsceneEndingPalPlacement>();
}

void UPalCutsceneUtility::LoadCharacterClassesAsync(const UObject* WorldContextObject, const TArray<TSoftClassPtr<APalCharacter>>& CharacterClasses, const FPalOnCharacterClassesLoaded& OnLoaded) {
}

bool UPalCutsceneUtility::IsLocalCutsceneHidingAllBuildObjects(const UObject* WorldContextObject) {
    return false;
}

TArray<FPalCutscenePalClassInfo> UPalCutsceneUtility::GetTopFriendshipPalClasses(const UObject* WorldContextObject, int32 MaxCount, bool bSortBySize) {
    return TArray<FPalCutscenePalClassInfo>();
}

UPalCutsceneComponent* UPalCutsceneUtility::GetLocalCutsceneComponent(const UObject* WorldContextObject) {
    return NULL;
}

APalCutsceneActor* UPalCutsceneUtility::GetCutsceneActorFromPlayer(ULevelSequencePlayer* Player) {
    return NULL;
}

void UPalCutsceneUtility::DrawDebugEndingPalPlacement(const UObject* WorldContextObject, const TArray<FPalCutsceneEndingPalPlacement>& Placements) {
}


