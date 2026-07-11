#pragma once
#include "CoreMinimal.h"
#include "PalBossBattleEventSpawnCharacterInfo.h"
#include "PalBossBattleEventBossRushWave.generated.h"

USTRUCT(BlueprintType)
struct FPalBossBattleEventBossRushWave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalBossBattleEventSpawnCharacterInfo> SpawnCharacterInfos;
    
    PAL_API FPalBossBattleEventBossRushWave();
};

