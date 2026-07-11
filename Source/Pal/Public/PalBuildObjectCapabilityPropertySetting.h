#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectCapabilityPropertySetting.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectCapabilityPropertySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PropertyNames;
    
    PAL_API FPalBuildObjectCapabilityPropertySetting();
};

