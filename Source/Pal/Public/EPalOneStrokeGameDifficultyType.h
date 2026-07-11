#pragma once
#include "CoreMinimal.h"
#include "EPalOneStrokeGameDifficultyType.generated.h"

UENUM(BlueprintType)
enum class EPalOneStrokeGameDifficultyType : uint8 {
    Invalid,
    VeryEasy,
    Easy,
    Normal,
    Hard,
    VeryHard,
};

