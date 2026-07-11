#pragma once
#include "CoreMinimal.h"
#include "PalQuestBlockerCondition.h"
#include "PalQuestEntryWithBlocker.generated.h"

USTRUCT(BlueprintType)
struct FPalQuestEntryWithBlocker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalQuestBlockerCondition> Blockers;
    
    PAL_API FPalQuestEntryWithBlocker();
};

