#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectDisposeByCollapseGroupSaveData.h"
#include "PalMapObjectDisposeByCollapseSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectDisposeByCollapseSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectDisposeByCollapseGroupSaveData> Groups;
    
    PAL_API FPalMapObjectDisposeByCollapseSaveData();
};

