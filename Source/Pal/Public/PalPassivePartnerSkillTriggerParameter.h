#pragma once
#include "CoreMinimal.h"
#include "EPalTribeID.h"
#include "PalPassivePartnerSkillTriggerParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalPassivePartnerSkillTriggerParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalTribeID> TargetTribeIds;
    
    PAL_API FPalPassivePartnerSkillTriggerParameter();
};

