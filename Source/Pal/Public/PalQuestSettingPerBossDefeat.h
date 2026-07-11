#pragma once
#include "CoreMinimal.h"
#include "PalQuestEntryWithBlocker.h"
#include "PalQuestSettingPerBossDefeat.generated.h"

USTRUCT(BlueprintType)
struct FPalQuestSettingPerBossDefeat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalQuestEntryWithBlocker> AutoCompleteQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalQuestEntryWithBlocker> AutoOrderQuests;
    
    PAL_API FPalQuestSettingPerBossDefeat();
};

