#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalCutsceneEndingOffsetByPriority.generated.h"

USTRUCT(BlueprintType)
struct FPalCutsceneEndingOffsetByPriority {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FVector> ByPriority;
    
    PAL_API FPalCutsceneEndingOffsetByPriority();
};

