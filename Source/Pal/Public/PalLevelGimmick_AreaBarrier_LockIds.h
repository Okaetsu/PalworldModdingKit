#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalLevelGimmick_AreaBarrier_LockIds.generated.h"

USTRUCT(BlueprintType)
struct FPalLevelGimmick_AreaBarrier_LockIds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> LockIds;
    
    PAL_API FPalLevelGimmick_AreaBarrier_LockIds();
};

