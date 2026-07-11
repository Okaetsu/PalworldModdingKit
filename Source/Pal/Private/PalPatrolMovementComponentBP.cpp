#include "PalPatrolMovementComponentBP.h"

UPalPatrolMovementComponentBP::UPalPatrolMovementComponentBP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalPatrolMovementComponentBP::Server_SetPatrolPoints_Implementation(const TArray<FPalPatrolMovementPoint>& Points) {
}

void UPalPatrolMovementComponentBP::BP_SetPatrolLocalOffsetPoints_RandomWait(const TArray<FVector>& LocalOffsets, float WaitMin, float WaitMax) {
}

void UPalPatrolMovementComponentBP::BP_SetPatrolLocalOffsetPoints(const TArray<FVector>& LocalOffsets, const TArray<float>& WaitTimes) {
}

void UPalPatrolMovementComponentBP::BP_SetMesh(UPrimitiveComponent* InTargetMesh) {
}


