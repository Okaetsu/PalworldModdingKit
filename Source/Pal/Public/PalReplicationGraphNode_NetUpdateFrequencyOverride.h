#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "PalReplicationGraphNode_NetUpdateFrequencyOverride.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPalReplicationGraphNode_NetUpdateFrequencyOverride : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UPalReplicationGraphNode_NetUpdateFrequencyOverride();

};

