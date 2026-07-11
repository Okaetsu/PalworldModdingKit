#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectDisposeByCollapseEntrySaveData.h"
#include "PalMapObjectDisposeByCollapseGroupSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectDisposeByCollapseGroupSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ByInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectDisposeByCollapseEntrySaveData> Entries;
    
    PAL_API FPalMapObjectDisposeByCollapseGroupSaveData();
};

