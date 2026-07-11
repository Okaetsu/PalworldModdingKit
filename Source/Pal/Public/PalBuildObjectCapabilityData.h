#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectCapabilityData.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectCapabilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> Capabilities;
    
    PAL_API FPalBuildObjectCapabilityData();
};

