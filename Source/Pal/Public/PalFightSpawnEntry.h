#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalFightSpawnEntry.generated.h"

USTRUCT(BlueprintType)
struct FPalFightSpawnEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData PalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnOffset;
    
    PAL_API FPalFightSpawnEntry();
};

