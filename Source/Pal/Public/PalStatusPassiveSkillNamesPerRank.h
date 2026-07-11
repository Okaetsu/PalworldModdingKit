#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalStatusPassiveSkillNamesPerRank.generated.h"

USTRUCT(BlueprintType)
struct FPalStatusPassiveSkillNamesPerRank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PassiveSkillData> SkillNames;
    
    PAL_API FPalStatusPassiveSkillNamesPerRank();
};

