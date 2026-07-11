#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectPoolSpawnState.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectPoolSpawnState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnedInWorld;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Revision;
    
    PAL_API FPalMapObjectPoolSpawnState();
};

