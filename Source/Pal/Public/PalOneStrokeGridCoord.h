#pragma once
#include "CoreMinimal.h"
#include "PalOneStrokeGridCoord.generated.h"

USTRUCT(BlueprintType)
struct FPalOneStrokeGridCoord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    PAL_API FPalOneStrokeGridCoord();
};

