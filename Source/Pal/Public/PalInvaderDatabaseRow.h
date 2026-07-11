#pragma once
#include "CoreMinimal.h"
#include "PalInvaderDatabaseBaseRow.h"
#include "PalInvaderDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalInvaderDatabaseRow : public FPalInvaderDatabaseBaseRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Wave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Exp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveLevelOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConditionBuildObjectId;
    
    PAL_API FPalInvaderDatabaseRow();
};

