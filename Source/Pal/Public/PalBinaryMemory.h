#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.generated.h"

USTRUCT(BlueprintType)
struct FPalBinaryMemory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> RawData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> CustomVersionData;
    
public:
    PAL_API FPalBinaryMemory();
};

