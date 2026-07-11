#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectCapabilityPropertySetting.h"
#include "PalBuildObjectCapabilityComponentSetting.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectCapabilityComponentSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SaveKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPalBuildObjectCapabilityPropertySetting> ComponentPropertyMap;
    
    PAL_API FPalBuildObjectCapabilityComponentSetting();
};

