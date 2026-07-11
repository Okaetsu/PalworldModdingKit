#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnLevelObjectLockGimmickStateChangedDelegate.h"
#include "PalLevelObjectLockGimmickRecordData.h"
#include "PalWorldObjectRecorderBase.h"
#include "PalWorldObjectRecord_LevelObjectLockGimmick.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorldObjectRecord_LevelObjectLockGimmick : public UPalWorldObjectRecorderBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLevelObjectLockGimmickStateChanged OnGimmickStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalLevelObjectLockGimmickRecordData> RecordDataMap;
    
public:
    UPalWorldObjectRecord_LevelObjectLockGimmick();

};

