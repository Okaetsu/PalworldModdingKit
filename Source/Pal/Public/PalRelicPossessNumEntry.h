#pragma once
#include "CoreMinimal.h"
#include "EPalRelicType.h"
#include "ThreadSafeInt32.h"
#include "PalRelicPossessNumEntry.generated.h"

USTRUCT(BlueprintType)
struct FPalRelicPossessNumEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalRelicType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThreadSafeInt32 Num;
    
    PAL_API FPalRelicPossessNumEntry();
};

