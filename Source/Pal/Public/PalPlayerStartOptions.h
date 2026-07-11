#pragma once
#include "CoreMinimal.h"
#include "PalPlayerStartOptions.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerStartOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DeactivateSkyCreator;
    
    PAL_API FPalPlayerStartOptions();
};

