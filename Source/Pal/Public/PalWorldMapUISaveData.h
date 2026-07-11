#pragma once
#include "CoreMinimal.h"
#include "PalWorldMapUISaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldMapUISaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> MaskTextureData;
    
    PAL_API FPalWorldMapUISaveData();
};

