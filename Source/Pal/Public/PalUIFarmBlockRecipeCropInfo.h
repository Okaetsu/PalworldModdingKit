#pragma once
#include "CoreMinimal.h"
#include "PalUIFarmBlockRecipeCropInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIFarmBlockRecipeCropInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CropDataId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CropItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrowupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CropItemNum;
    
    PAL_API FPalUIFarmBlockRecipeCropInfo();
};

