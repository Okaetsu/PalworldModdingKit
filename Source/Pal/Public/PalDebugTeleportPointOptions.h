#pragma once
#include "CoreMinimal.h"
#include "PalDebugTeleportPointOptions.generated.h"

USTRUCT(BlueprintType)
struct FPalDebugTeleportPointOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeactivateSkyCreator;
    
    PAL_API FPalDebugTeleportPointOptions();
};

