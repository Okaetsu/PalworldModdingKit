#pragma once
#include "CoreMinimal.h"
#include "EPalRelicType.h"
#include "PalRelicObtainFlagSaveEntry.generated.h"

USTRUCT(BlueprintType)
struct FPalRelicObtainFlagSaveEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalRelicType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Flags;
    
    PAL_API FPalRelicObtainFlagSaveEntry();
};

