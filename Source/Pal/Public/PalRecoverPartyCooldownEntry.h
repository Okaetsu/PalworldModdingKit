#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalRecoverPartyCooldownEntry.generated.h"

USTRUCT(BlueprintType)
struct FPalRecoverPartyCooldownEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastUsedTime;
    
    PAL_API FPalRecoverPartyCooldownEntry();
};

