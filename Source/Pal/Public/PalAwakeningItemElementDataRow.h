#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalElementType.h"
#include "PalAwakeningItemElementDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalAwakeningItemElementDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalElementType ElementType;
    
    PAL_API FPalAwakeningItemElementDataRow();
};

