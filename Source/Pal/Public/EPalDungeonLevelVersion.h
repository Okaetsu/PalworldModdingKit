#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonLevelVersion.generated.h"

UENUM(BlueprintType)
enum class EPalDungeonLevelVersion : uint8 {
    BeforeVersionWasAdded,
    ConvertDungeonLevelsToNewer,
    MoveDungeonLevels_1_0,
    VersionPlusOne,
    LatestVersion = MoveDungeonLevels_1_0,
};

