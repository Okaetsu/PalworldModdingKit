#pragma once
#include "CoreMinimal.h"
#include "PalPassivePartnerSkillItemParameter.h"
#include "PalPassivePartnerSkillConditionParams.generated.h"

USTRUCT(BlueprintType)
struct FPalPassivePartnerSkillConditionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPassivePartnerSkillItemParameter ItemParam;
    
    PAL_API FPalPassivePartnerSkillConditionParams();
};

