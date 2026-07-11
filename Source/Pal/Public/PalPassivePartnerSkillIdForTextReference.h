#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalPassivePartnerSkillIdForTextReference.generated.h"

USTRUCT(BlueprintType)
struct FPalPassivePartnerSkillIdForTextReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PassiveSkillData> PassiveSkillIds;
    
    PAL_API FPalPassivePartnerSkillIdForTextReference();
};

