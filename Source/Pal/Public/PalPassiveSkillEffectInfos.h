#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalPassiveSkillEffect.h"
#include "PalPassiveSkillEffectInfos.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillEffectInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalPassiveSkillEffect> SkillEffectArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID GranterInstanceID;
    
    PAL_API FPalPassiveSkillEffectInfos();
};

