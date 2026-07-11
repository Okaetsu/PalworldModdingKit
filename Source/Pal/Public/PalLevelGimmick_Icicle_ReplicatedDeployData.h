#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalLevelGimmick_Icicle_ReplicatedDeployData.generated.h"

USTRUCT(BlueprintType)
struct FPalLevelGimmick_Icicle_ReplicatedDeployData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeployed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> CosmeticIcicleLocations;
    
    PAL_API FPalLevelGimmick_Icicle_ReplicatedDeployData();
};

