#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalItemIDRedirectTableRow.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalItemIDRedirectTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> SourceItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData DestinationItemId;
    
    FPalItemIDRedirectTableRow();
};

