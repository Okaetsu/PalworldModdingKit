#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalPlayerPlatform.h"
#include "PalCachedPlayerPlatformInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCachedPlayerPlatformInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPlayerPlatform PlayerPlatform;
    
    PAL_API FPalCachedPlayerPlatformInfo();
};

