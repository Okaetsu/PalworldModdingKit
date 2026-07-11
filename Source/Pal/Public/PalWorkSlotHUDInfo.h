#pragma once
#include "CoreMinimal.h"
#include "EPalBuildObjectStatusHUDSlot.h"
#include "EPalWorkSuitability.h"
#include "PalWorkSlotHUDInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkSlotHUDInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBuildObjectStatusHUDSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkSuitability RequiredWorkSuitability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredRank;
    
    PAL_API FPalWorkSlotHUDInfo();
};

