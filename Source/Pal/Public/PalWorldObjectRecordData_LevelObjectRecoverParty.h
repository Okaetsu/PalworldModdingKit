#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalWorldObjectRecordData_LevelObjectRecoverParty.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldObjectRecordData_LevelObjectRecoverParty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FDateTime> PlayerLastUsedTimes;
    
    PAL_API FPalWorldObjectRecordData_LevelObjectRecoverParty();
};

