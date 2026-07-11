#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalInvaderCancelCostRow.generated.h"

USTRUCT(BlueprintType)
struct FPalInvaderCancelCostRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Money;
    
    PAL_API FPalInvaderCancelCostRow();
};

