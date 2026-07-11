#include "PalAIBehaviorAnomalyDetector.h"

UPalAIBehaviorAnomalyDetector::UPalAIBehaviorAnomalyDetector() {
    this->DetectMinCompletionCount = 5;
    this->DetectWindowSec = 3.00f;
    this->DetectMaxClusterRadiusCm = 1500.00f;
    this->DumpCooldownSec = 5.00f;
    this->RingBufferFrameCount = 300;
    this->DetectMaxEfficiencyRatio = 0.30f;
    this->DetectMinTotalPathCm = 500.00f;
    this->DetectMotionWindowFrames = 90;
    this->DebugMarkerDurationSec = 5.00f;
    this->bDrawDebugMarker = true;
    this->TargetActionNameFilter = TEXT("Escape");
    this->bEnabled = false;
}

void UPalAIBehaviorAnomalyDetector::SetEnabled(bool bInEnabled) {
}

bool UPalAIBehaviorAnomalyDetector::SelfVerifyDetector() {
    return false;
}

void UPalAIBehaviorAnomalyDetector::ResetAllState() {
}

void UPalAIBehaviorAnomalyDetector::PrintStatus() {
}

void UPalAIBehaviorAnomalyDetector::ManualDumpRecastTileLink(int32 FromTileX, int32 FromTileY, int32 FromLayer, int32 FromPolyIndex, int32 ToTileX, int32 ToTileY, int32 ToLayer, int32 ToPolyIndex) {
}

void UPalAIBehaviorAnomalyDetector::ManualDumpRecastPointFull(float X, float Y, float Z, int32 FromTileX, int32 FromTileY, int32 FromLayer, int32 FromPolyIndex, int32 ToTileX, int32 ToTileY, int32 ToLayer, int32 ToPolyIndex) {
}

int32 UPalAIBehaviorAnomalyDetector::ManualDumpRecastInRadius(FVector Origin, float SearchRadius, int32 MaxCorridorEdges) {
    return 0;
}

void UPalAIBehaviorAnomalyDetector::ManualDumpRecastController(APalAIController* AIC, int32 MaxCorridorEdges) {
}

int32 UPalAIBehaviorAnomalyDetector::ManualDumpRecastAllInTargetAction(int32 MaxCorridorEdges) {
    return 0;
}

void UPalAIBehaviorAnomalyDetector::ManualDumpNearestPal(FVector Origin, float SearchRadius) {
}

void UPalAIBehaviorAnomalyDetector::ManualDumpInRadius(FVector Origin, float SearchRadius) {
}

void UPalAIBehaviorAnomalyDetector::ManualDumpController(APalAIController* AIC) {
}

int32 UPalAIBehaviorAnomalyDetector::ManualDumpAllInTargetAction() {
    return 0;
}

bool UPalAIBehaviorAnomalyDetector::IsEnabled() const {
    return false;
}


