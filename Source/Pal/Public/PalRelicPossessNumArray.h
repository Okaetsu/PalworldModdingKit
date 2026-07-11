#pragma once
#include "CoreMinimal.h"
#include "PalRelicPossessNumEntry.h"
#include "PalRelicPossessNumArray.generated.h"

USTRUCT(BlueprintType)
struct FPalRelicPossessNumArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalRelicPossessNumEntry> Entries;
    
    PAL_API FPalRelicPossessNumArray();
};

