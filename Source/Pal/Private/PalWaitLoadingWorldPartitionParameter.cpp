#include "PalWaitLoadingWorldPartitionParameter.h"

FPalWaitLoadingWorldPartitionParameter::FPalWaitLoadingWorldPartitionParameter() {
    this->CellState = EWorldPartitionRuntimeCellState::Unloaded;
    this->IntervalTime = 3.00f;
    this->InFirstDelayTime = -1.00f;
}

