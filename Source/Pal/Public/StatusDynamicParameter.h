#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "StatusDynamicParameter.generated.h"

USTRUCT(BlueprintType)
struct FStatusDynamicParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneralIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GeneralName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GeneralFloatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID GeneralInstanceID;
    
    PAL_API FStatusDynamicParameter();
};

