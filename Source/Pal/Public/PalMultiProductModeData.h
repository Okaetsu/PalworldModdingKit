#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemProductData.h"
#include "PalMultiProductModeData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalMultiProductModeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemProductData ProductId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssignDefineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> VisualActorClass;
    
    PAL_API FPalMultiProductModeData();
};

