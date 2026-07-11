#pragma once
#include "CoreMinimal.h"
#include "PalQuestBlockGroup.generated.h"

class UPalQuestBlock;

USTRUCT(BlueprintType)
struct FPalQuestBlockGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UPalQuestBlock>> BlockList;
    
    PAL_API FPalQuestBlockGroup();
};

