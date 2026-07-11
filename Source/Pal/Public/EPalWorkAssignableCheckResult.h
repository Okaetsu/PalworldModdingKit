#pragma once
#include "CoreMinimal.h"
#include "EPalWorkAssignableCheckResult.generated.h"

UENUM(BlueprintType)
enum class EPalWorkAssignableCheckResult : uint8 {
    None,
    WorkerEvent,
    Dead,
    Sleeping,
    RecoverHungry,
    NotSuitable,
    NotSuitableLevel,
    NotSuitableTribeID,
    NotSuitableSize,
    NotAssignableOtomo,
    NotAssignableBaseCampWorker,
    NotValidIndividualCharacterParameter,
    CannotReviveSelf,
    NotExistsMapObject,
    MapObjectEffect,
    Enable,
};

