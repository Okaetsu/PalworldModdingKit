#pragma once
#include "CoreMinimal.h"
#include "PalUIMultiProductModeInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIMultiProductModeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProductId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProductItemStaticId;
    
    PAL_API FPalUIMultiProductModeInfo();
};

