#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalWorldObjectRecordData_LevelObjectRecoverParty.h"
#include "PalWorldObjectRecorderBase.h"
#include "PalWorldObjectRecord_LevelObjectRecoverParty.generated.h"

UCLASS(Blueprintable)
class UPalWorldObjectRecord_LevelObjectRecoverParty : public UPalWorldObjectRecorderBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalWorldObjectRecordData_LevelObjectRecoverParty> RecordDataMapByLevelObjectInstanceId;
    
public:
    UPalWorldObjectRecord_LevelObjectRecoverParty();

};

