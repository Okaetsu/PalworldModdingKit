#pragma once
#include "CoreMinimal.h"
#include "PalMiniGamePackBase.h"
#include "PalMiniGamePack_GaugeStop.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMiniGamePack_GaugeStop : public UPalMiniGamePackBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeStartPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeEndPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeRangePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorPercentSpeed;
    
    UPalMiniGamePack_GaugeStop();

};

