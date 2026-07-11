#pragma once
#include "CoreMinimal.h"
#include "EPalBossBattleSequenceType.generated.h"

UENUM(BlueprintType)
enum class EPalBossBattleSequenceType : uint8 {
    None,
    PreEntry,
    Ready,
    Opening,
    Combat,
    Ending,
    Completed,
};

