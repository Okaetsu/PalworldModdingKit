#pragma once
#include "CoreMinimal.h"
#include "EPalTribeID.h"
#include "PalPassivePartnerSkillInvocationParams.h"
#include "PalPassiveSkillSetupInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillSetupInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkillName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPartnerSkill;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalTribeID TribeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPassivePartnerSkillInvocationParams PartnerSkillParams;
    
    PAL_API FPalPassiveSkillSetupInfo();
};

