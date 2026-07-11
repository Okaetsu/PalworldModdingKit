#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalLocationType.h"
#include "EPalRelicType.h"
#include "PalLocationUIData.h"
#include "PalLocationUIData_TableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalLocationUIData_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalLocationType, FPalLocationUIData> locationUIDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UTexture2D>> mapObjectIconMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalRelicType, TSoftObjectPtr<UTexture2D>> levelObjectIconMap;
    
    PAL_API FPalLocationUIData_TableRow();
};

