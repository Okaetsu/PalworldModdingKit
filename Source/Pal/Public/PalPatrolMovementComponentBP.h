#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalPatrolMovementComponent.h"
#include "PalPatrolMovementPoint.h"
#include "PalPatrolMovementComponentBP.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalPatrolMovementComponentBP : public UPalPatrolMovementComponent {
    GENERATED_BODY()
public:
    UPalPatrolMovementComponentBP(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPatrolPoints(const TArray<FPalPatrolMovementPoint>& Points);
    
public:
    UFUNCTION(BlueprintCallable)
    void BP_SetPatrolLocalOffsetPoints_RandomWait(const TArray<FVector>& LocalOffsets, float WaitMin, float WaitMax);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetPatrolLocalOffsetPoints(const TArray<FVector>& LocalOffsets, const TArray<float>& WaitTimes);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMesh(UPrimitiveComponent* InTargetMesh);
    
};

