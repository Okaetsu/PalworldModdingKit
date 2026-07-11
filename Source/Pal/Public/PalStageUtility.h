#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WorldPartition/WorldPartitionStreamingSource.h"
#include "PalStageInstanceId.h"
#include "PalStageUtility.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPalStageUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalStageUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorUnderStageTop(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_PalStageInstanceId(FPalStageInstanceId A, FPalStageInstanceId B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWorldPartitionStreamingQuerySource ApplyActorDataLayersToWorldPartitionQuerySource(const AActor* Actor, FWorldPartitionStreamingQuerySource QuerySource);
    
};

