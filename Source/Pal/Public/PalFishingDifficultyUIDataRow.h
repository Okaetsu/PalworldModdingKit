#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalFishingDifficultyUIDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalFishingDifficultyUIDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData RecommendRodItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowRodOrAboveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData RecommendBaitItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowBaitOrAboveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> SatisfyBaitItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowPalSkillAdvice;
    
    PAL_API FPalFishingDifficultyUIDataRow();
};

