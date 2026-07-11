#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PalPlayerDataPalStorageUpdateCheckTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerDataPalStorageUpdateCheckTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalPlayerDataPalStorageUpdateCheckTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPalPlayerDataPalStorageUpdateCheckTickFunction> : public TStructOpsTypeTraitsBase2<FPalPlayerDataPalStorageUpdateCheckTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

