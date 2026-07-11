#pragma once
#include "CoreMinimal.h"
#include "EPalBreedStoppedReason.generated.h"

UENUM(BlueprintType)
enum class EPalBreedStoppedReason : uint8 {
    None,
    NoPower,
    SlotFull,
    NoItem,
    NoPair,
    GenderMismatch,
};

