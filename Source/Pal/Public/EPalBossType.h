#pragma once
#include "CoreMinimal.h"
#include "EPalBossType.generated.h"

UENUM(BlueprintType)
enum class EPalBossType : uint8 {
    None,
    GrassBoss,
    ElectricBoss,
    ForestBoss,
    SnowBoss,
    DesertBoss,
    SakurajimaBoss,
    VikingBoss,
    SorajimaBoss,
    KingWhaleBoss,
    WorldTreeMiddleBoss1,
    WorldTreeMiddleBoss2,
    WorldTreeMiddleBoss3,
    WorldTreeBoss,
    Max,
};

