#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveSkillEffectType.h"
#include "PalPassiveSkillEffectTypes.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillEffectTypes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalPassiveSkillEffectType> EffectTypes;
    
    PAL_API FPalPassiveSkillEffectTypes();
};

