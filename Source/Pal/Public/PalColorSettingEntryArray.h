#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalColorSettingEntry.h"
#include "PalColorSettingEntryArray.generated.h"

USTRUCT(BlueprintType)
struct FPalColorSettingEntryArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalColorSettingEntry> Items;
    
    PAL_API FPalColorSettingEntryArray();
};

