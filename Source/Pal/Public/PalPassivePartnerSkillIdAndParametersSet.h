#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalPassivePartnerSkillParameters.h"
#include "PalPassivePartnerSkillIdAndParametersSet.generated.h"

USTRUCT(BlueprintType)
struct FPalPassivePartnerSkillIdAndParametersSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PassiveSkillData SkillName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPassivePartnerSkillParameters Parameters;
    
    PAL_API FPalPassivePartnerSkillIdAndParametersSet();
};

