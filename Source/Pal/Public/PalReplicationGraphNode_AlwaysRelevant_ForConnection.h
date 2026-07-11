#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "PalAlwaysRelevantActorInfo.h"
#include "PalReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class UPalReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalAlwaysRelevantActorInfo> PastRelevantActors;
    
public:
    UPalReplicationGraphNode_AlwaysRelevant_ForConnection();
};

