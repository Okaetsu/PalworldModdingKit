#pragma once
#include "CoreMinimal.h"
#include "PalQuestBlockerCondition.generated.h"

USTRUCT(BlueprintType)
struct FPalQuestBlockerCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlockIndex;
    
    PAL_API FPalQuestBlockerCondition();
};

