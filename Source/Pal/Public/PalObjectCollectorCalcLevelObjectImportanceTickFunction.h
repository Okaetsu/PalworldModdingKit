#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PalObjectCollectorCalcLevelObjectImportanceTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FPalObjectCollectorCalcLevelObjectImportanceTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalObjectCollectorCalcLevelObjectImportanceTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPalObjectCollectorCalcLevelObjectImportanceTickFunction> : public TStructOpsTypeTraitsBase2<FPalObjectCollectorCalcLevelObjectImportanceTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

