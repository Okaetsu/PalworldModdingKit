#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBinaryMemory.h"
#include "PalInstanceID.h"
#include "PalBossBattleInstanceSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalBossBattleInstanceSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, FGuid> BaseCampWorkerSpawnedByPlayerMap;
    
    PAL_API FPalBossBattleInstanceSaveData();
};

