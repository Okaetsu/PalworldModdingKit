#pragma once
#include "CoreMinimal.h"
#include "PPSkyCreator.h"
#include "PalSkyCreator.generated.h"

UCLASS(Blueprintable)
class PAL_API APalSkyCreator : public APPSkyCreator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bCutsceneLocalVisible;
    
    APalSkyCreator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCutsceneLocalVisible(bool bNewValue);
    
};

