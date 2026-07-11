#pragma once
#include "CoreMinimal.h"
#include "EPalStatusID.h"
#include "StatusDynamicParameter.h"
#include "PalStatusInvokerInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalStatusInvokerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalStatusID statusID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatusDynamicParameter DynamicParam;
    
    PAL_API FPalStatusInvokerInfo();
};

