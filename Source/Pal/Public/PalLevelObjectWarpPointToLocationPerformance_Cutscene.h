#pragma once
#include "CoreMinimal.h"
#include "PalLevelObjectWarpPointToLocationPerformanceBase.h"
#include "PalLevelObjectWarpPointToLocationPerformance_Cutscene.generated.h"

class APalCutsceneActor;
class APalPlayerCharacter;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalLevelObjectWarpPointToLocationPerformance_Cutscene : public UPalLevelObjectWarpPointToLocationPerformanceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalCutsceneActor> SoftCutsceneActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalPlayerCharacter> LocalTargetPlayer;
    
public:
    UPalLevelObjectWarpPointToLocationPerformance_Cutscene();

private:
    UFUNCTION(BlueprintCallable)
    void OnCutsceneFinished(bool bIsSkipped);
    
};

