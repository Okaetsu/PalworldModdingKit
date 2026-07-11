#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalCoopSkillNightVisionBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillNightVisionBase : public UObject {
    GENERATED_BODY()
public:
    UPalCoopSkillNightVisionBase();

    UFUNCTION(BlueprintCallable)
    void Terminate();
    
};

