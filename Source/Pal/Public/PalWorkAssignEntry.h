#pragma once
#include "CoreMinimal.h"
#include "EPalActionType.h"
#include "EPalWorkSuitability.h"
#include "EPalWorkType.h"
#include "PalWorkAssignEntry.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkAssignEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkSuitability WorkSuitability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkType WorkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalActionType WorkActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAssignNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredRank;
    
    PAL_API FPalWorkAssignEntry();
};

