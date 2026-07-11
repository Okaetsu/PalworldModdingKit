#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalCutsceneEndingPalPlacement.h"
#include "PalCutscenePalClassInfo.h"
#include "PalOnCharacterClassesLoadedDelegate.h"
#include "Templates/SubclassOf.h"
#include "PalCutsceneUtility.generated.h"

class APalCharacter;
class APalCutsceneActor;
class ULevelSequencePlayer;
class UObject;
class UPalCutsceneComponent;

UCLASS(Blueprintable)
class UPalCutsceneUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalCutsceneUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APalCharacter* SpawnCharacterForCutscene(const UObject* WorldContextObject, TSubclassOf<APalCharacter> CharacterClass, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    static void SetupCutsceneIdleAnimation(const TArray<FPalCutsceneEndingPalPlacement>& Placements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FPalCutsceneEndingPalPlacement> ParseEndingPalTags(const TArray<FName>& BindingTags, const FString& Prefix);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadCharacterClassesAsync(const UObject* WorldContextObject, const TArray<TSoftClassPtr<APalCharacter>>& CharacterClasses, const FPalOnCharacterClassesLoaded& OnLoaded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocalCutsceneHidingAllBuildObjects(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FPalCutscenePalClassInfo> GetTopFriendshipPalClasses(const UObject* WorldContextObject, int32 MaxCount, bool bSortBySize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalCutsceneComponent* GetLocalCutsceneComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APalCutsceneActor* GetCutsceneActorFromPlayer(ULevelSequencePlayer* Player);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugEndingPalPlacement(const UObject* WorldContextObject, const TArray<FPalCutsceneEndingPalPlacement>& Placements);
    
};

