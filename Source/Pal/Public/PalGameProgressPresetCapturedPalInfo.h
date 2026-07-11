#pragma once
#include "CoreMinimal.h"
#include "PalDebugOtomoPalInfo.h"
#include "PalGameProgressPresetCapturedPalInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalGameProgressPresetCapturedPalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDebugOtomoPalInfo PalInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    PAL_API FPalGameProgressPresetCapturedPalInfo();
};

