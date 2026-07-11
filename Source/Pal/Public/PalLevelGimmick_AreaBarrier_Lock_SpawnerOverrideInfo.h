#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalLevelGimmick_AreaBarrier_Lock_SpawnerOverrideInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalLevelGimmick_AreaBarrier_Lock_SpawnerOverrideInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LockId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid RelatedVolumeId;
    
    PAL_API FPalLevelGimmick_AreaBarrier_Lock_SpawnerOverrideInfo();
};

