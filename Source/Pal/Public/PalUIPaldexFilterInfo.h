#pragma once
#include "CoreMinimal.h"
#include "EPalElementType.h"
#include "EPalUIPaldexSortType.h"
#include "EPalWorkSuitability.h"
#include "PalUIPaldexFilterInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIPaldexFilterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalElementType> FilteringElementTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterCaptureBonusComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalWorkSuitability> FilteringWorkSuitabilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalUIPaldexSortType SortType;
    
    PAL_API FPalUIPaldexFilterInfo();
};

