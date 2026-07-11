#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemPickupData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_ItemPickupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_ItemPickupData();
};

