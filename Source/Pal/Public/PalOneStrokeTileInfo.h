#pragma once
#include "CoreMinimal.h"
#include "EPalOneStrokeTileState.h"
#include "PalOneStrokeGridCoord.h"
#include "PalOneStrokeTileInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalOneStrokeTileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOneStrokeGridCoord Coord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalOneStrokeTileState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisitOrder;
    
    PAL_API FPalOneStrokeTileInfo();
};

