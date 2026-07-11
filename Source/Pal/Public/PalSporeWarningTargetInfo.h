#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalSporeWarningTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalSporeWarningTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    PAL_API FPalSporeWarningTargetInfo();
};

