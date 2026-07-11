#pragma once
#include "CoreMinimal.h"
#include "EPalElementType.h"
#include "EPalTribeID.h"
#include "PalPassiveSkillFindOtomoParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillFindOtomoParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalElementType> TargetElementTypes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalTribeID> TargetPalTribeIds;
    
    PAL_API FPalPassiveSkillFindOtomoParameter();
};

