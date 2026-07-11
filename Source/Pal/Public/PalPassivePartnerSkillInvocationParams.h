#pragma once
#include "CoreMinimal.h"
#include "EPalTribeID.h"
#include "EPalWorkType.h"
#include "PalPassivePartnerSkillItemParameter.h"
#include "PalPassiveRegeneParameter.h"
#include "PalPassivePartnerSkillInvocationParams.generated.h"

USTRUCT(BlueprintType)
struct FPalPassivePartnerSkillInvocationParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalTribeID TribeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPassivePartnerSkillItemParameter ItemParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPassiveRegeneParameter RegeneParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkType WorkType;
    
    PAL_API FPalPassivePartnerSkillInvocationParams();
};

