#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PalLaunchRecoveryTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FPalLaunchRecoveryTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalLaunchRecoveryTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPalLaunchRecoveryTickFunction> : public TStructOpsTypeTraitsBase2<FPalLaunchRecoveryTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

