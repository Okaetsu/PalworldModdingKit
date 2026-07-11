#pragma once
#include "CoreMinimal.h"
#include "EPalLimitVolumeFlag.generated.h"

UENUM()
enum class EPalLimitVolumeFlag : int32 {
    Build = 1,
    EnemySpawn,
    MapObjectSpawn = 4,
    BaseCampArea = 8,
    FoliageSpawn_DEPRECATED = 22,
    WorldTreeBuild = 32,
};

