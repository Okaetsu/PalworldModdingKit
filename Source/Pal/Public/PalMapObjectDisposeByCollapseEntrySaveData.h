#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalMapObjectDisposeOptionType.h"
#include "PalMapObjectDisposeByCollapseEntrySaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectDisposeByCollapseEntrySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalMapObjectDisposeOptionType> OptionTypes;
    
    PAL_API FPalMapObjectDisposeByCollapseEntrySaveData();
};

