#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalEggSpawnerDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalEggSpawnerDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTimeMinutesObtained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespawnableMulti;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWorldTreePalEgg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WorldTreePalEggProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProbabilityRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LotteryCoolTimeMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustMapObjectToFloor;
    
    PAL_API FPalEggSpawnerDatabaseRow();
};

