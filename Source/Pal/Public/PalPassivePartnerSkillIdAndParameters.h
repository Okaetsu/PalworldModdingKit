#pragma once
#include "CoreMinimal.h"
#include "PalPassivePartnerSkillIdAndParametersSet.h"
#include "PalPassivePartnerSkillIdAndParameters.generated.h"

USTRUCT(BlueprintType)
struct FPalPassivePartnerSkillIdAndParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalPassivePartnerSkillIdAndParametersSet> SkillAndParametersArray;
    
    PAL_API FPalPassivePartnerSkillIdAndParameters();
};

