#pragma once
#include "CoreMinimal.h"
#include "EPalFogBlendMode.h"
#include "PalFogParameterBlendConfig.generated.h"

USTRUCT(BlueprintType)
struct FPalFogParameterBlendConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalFogBlendMode BlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseExponentialBlend;
    
    PAL_API FPalFogParameterBlendConfig();
};

