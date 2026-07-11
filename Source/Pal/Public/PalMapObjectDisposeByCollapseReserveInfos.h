#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectDisposeReserveInfo.h"
#include "PalMapObjectDisposeByCollapseReserveInfos.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectDisposeByCollapseReserveInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectDisposeReserveInfo> ReserveInfos;
    
    PAL_API FPalMapObjectDisposeByCollapseReserveInfos();
};

