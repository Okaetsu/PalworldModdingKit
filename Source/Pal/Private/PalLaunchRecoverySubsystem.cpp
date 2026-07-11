#include "PalLaunchRecoverySubsystem.h"

UPalLaunchRecoverySubsystem::UPalLaunchRecoverySubsystem() {
    this->SearchTickBudgetMs = 2.00f;
    this->SearchFailCooldownSeconds = 2.00f;
    this->StuckTimeThreshold = 1.00f;
    this->SearchRadiusMin = 150.00f;
    this->SearchRadiusMax = 600.00f;
    this->ArcTime = 0.70f;
    this->MinJumpHeight = 120.00f;
    this->LandingTimeout = 3.00f;
    this->Cooldown = 3.00f;
    this->MaxFailCount = 3;
    this->MinSuccessDistance = 50.00f;
    this->TotalTimeout = 10.00f;
    this->MaxLayerVariantsPerSample = 3;
    this->MaxDropZoneSamplesPerFrame = 0;
    this->DropHorizontalCommitFinishDistance = 30.00f;
    this->DropHorizontalCommitStuckSeconds = 0.50f;
    this->DropHorizontalCommitStuckSpeedThreshold = 50.00f;
    this->DropHorizontalCommitMinDistImproveEpsilon = 1.00f;
    this->WallHopWallTopMargin = 50.00f;
    this->WallHopMaxWallClearance = 500.00f;
    this->WallHopCeilingProbeHeight = 500.00f;
    this->WallHopThinWallMaxThickness = 200.00f;
    this->FenceWallProbeForwardDistance = 75.00f;
    this->MoveToLocationAcceptanceRadius = 5.00f;
    this->DropZoneSampleDirections = 8;
    this->DropZoneSampleDistanceLayers = 3;
    this->GroundForwardTraceUpOffset = 200.00f;
    this->GroundForwardTraceDownDistance = 1000.00f;
    this->HorizontalCommitSpeedScale = 6.00f;
    this->HorizontalCommitSpeedMax = 600.00f;
    this->HorizontalCommitBrakeDeceleration = 4000.00f;
    this->WaypointReachDistance = 50.00f;
    this->JumpToDestPenaltyMultiplier = 1.40f;
    this->WallHopScorePenalty = 500.00f;
    this->Phase2CloseEnoughDistance = 200.00f;
    this->ClimbApexAboveJumpTarget = 100.00f;
    this->DropApexAboveSource = 120.00f;
    this->LandingPenaltyFactor = 1.50f;
    this->JumpHeightPenaltyMultiplier = 1.00f;
    this->LaunchHopMinJumpHeightFloor = 100.00f;
    this->DropHorizontalCommitMinXYDistance = 50.00f;
    this->DropRoundTripSafetyRatio = 0.90f;
    this->DropFallbackVz = 300.00f;
    this->RuntimeFallbackHorizontalSpeed = 400.00f;
    this->ClimbHorizontalCommitBelowTarget = 50.00f;
    this->MaxStartCandidates = 8;
    this->MaxDestCandidates = 8;
    this->NavProjectionExtentXY = 200.00f;
    this->NavProjectionExtentZ = 400.00f;
    this->bRouteCacheEnabled = true;
    this->RouteCacheTTLSeconds = 60.00f;
    this->RouteCacheMaxEntriesPerBaseCamp = 32;
    this->RouteCacheSweepIntervalSeconds = 5.00f;
    this->RouteCacheInFlightRetryIntervalSeconds = 0.50f;
}


