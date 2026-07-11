#include "PalOneStrokeGameProcessor.h"

UPalOneStrokeGameProcessor::UPalOneStrokeGameProcessor() {
}

bool UPalOneStrokeGameProcessor::TryMoveTo(FPalOneStrokeGridCoord TargetCoord) {
    return false;
}

bool UPalOneStrokeGameProcessor::TryMoveDirection(EPalOneStrokeMoveDirection Direction) {
    return false;
}

void UPalOneStrokeGameProcessor::StartNewGame() {
}

void UPalOneStrokeGameProcessor::SetupBySettingData(const FPalOneStrokeGameSettingData& NewSettingData) {
}

bool UPalOneStrokeGameProcessor::SelectStartPosition(FPalOneStrokeGridCoord StartCoord) {
    return false;
}

void UPalOneStrokeGameProcessor::RestartGame() {
}

bool UPalOneStrokeGameProcessor::IsStuck() const {
    return false;
}

bool UPalOneStrokeGameProcessor::HasStarted() const {
    return false;
}

int32 UPalOneStrokeGameProcessor::GetVisitedTileCount() const {
    return 0;
}

FPalOneStrokeTileInfo UPalOneStrokeGameProcessor::GetTileAt(FPalOneStrokeGridCoord Coord) const {
    return FPalOneStrokeTileInfo{};
}

FPalOneStrokeGridCoord UPalOneStrokeGameProcessor::GetStartPosition() const {
    return FPalOneStrokeGridCoord{};
}


int32 UPalOneStrokeGameProcessor::GetRequiredVisitCount() const {
    return 0;
}

float UPalOneStrokeGameProcessor::GetProgress() const {
    return 0.0f;
}

TArray<FPalOneStrokeTileInfo> UPalOneStrokeGameProcessor::GetGridTiles() const {
    return TArray<FPalOneStrokeTileInfo>();
}

int32 UPalOneStrokeGameProcessor::GetGridSize() const {
    return 0;
}

FPalOneStrokeGridCoord UPalOneStrokeGameProcessor::GetGoalPosition() const {
    return FPalOneStrokeGridCoord{};
}

EPalOneStrokeGameState UPalOneStrokeGameProcessor::GetGameState() const {
    return EPalOneStrokeGameState::NotInitialized;
}

EPalOneStrokeGameDifficultyType UPalOneStrokeGameProcessor::GetDifficultyType() const {
    return EPalOneStrokeGameDifficultyType::Invalid;
}

FPalOneStrokeGridCoord UPalOneStrokeGameProcessor::GetCurrentPosition() const {
    return FPalOneStrokeGridCoord{};
}

TArray<FPalOneStrokeGridCoord> UPalOneStrokeGameProcessor::GetAvailableMoves() const {
    return TArray<FPalOneStrokeGridCoord>();
}

bool UPalOneStrokeGameProcessor::CanMoveTo(FPalOneStrokeGridCoord TargetCoord) const {
    return false;
}


