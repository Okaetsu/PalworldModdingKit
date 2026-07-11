#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalTwoPointMoveData.generated.h"

USTRUCT(BlueprintType)
struct FPalTwoPointMoveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    PAL_API FPalTwoPointMoveData();
};

