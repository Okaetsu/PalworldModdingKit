#pragma once
#include "CoreMinimal.h"
#include "PalPlayingWorldMapUIData.generated.h"

class UTexture2D;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FPalPlayingWorldMapUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* MaskRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MaskTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> TextureRawData;
    
    PAL_API FPalPlayingWorldMapUIData();
};

