#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalBuildObjectCapabilityData.h"
#include "PalBuildObjectCapabilityDataAsset.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalBuildObjectCapabilityDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalBuildObjectCapabilityData> BuildObjectCapabilityMap;
    
    UPalBuildObjectCapabilityDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCapabilityData(FName BuildObjectId, FPalBuildObjectCapabilityData& OutData) const;
    
};

