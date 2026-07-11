#pragma once
#include "CoreMinimal.h"
#include "PPSkyCreator.h"
#include "PalSkyCreator.generated.h"

UCLASS(Blueprintable)
class PAL_API APalSkyCreator : public APPSkyCreator {
    GENERATED_BODY()
public:
    APalSkyCreator(const FObjectInitializer& ObjectInitializer);

};

