#pragma once
#include "CoreMinimal.h"
#include "PalLevelObjectActor.h"
#include "PalReplicatedLevelObjectActor.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API APalReplicatedLevelObjectActor : public APalLevelObjectActor {
    GENERATED_BODY()
public:
    APalReplicatedLevelObjectActor(const FObjectInitializer& ObjectInitializer);

};

