#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PalObjectCollectorCalcNearSpawnerBaseTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FPalObjectCollectorCalcNearSpawnerBaseTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalObjectCollectorCalcNearSpawnerBaseTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPalObjectCollectorCalcNearSpawnerBaseTickFunction> : public TStructOpsTypeTraitsBase2<FPalObjectCollectorCalcNearSpawnerBaseTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

