#pragma once
#include "CoreMinimal.h"
#include "EPalElementType.h"
#include "EPalTribeID.h"
#include "PalPassiveOtherOtomoConditionParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveOtherOtomoConditionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalElementType TargetElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalElementType> TargetElementTypes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalTribeID> PalTribeIds;
    
    PAL_API FPalPassiveOtherOtomoConditionParameter();
};

