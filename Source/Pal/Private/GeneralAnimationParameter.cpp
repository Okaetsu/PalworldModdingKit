#include "GeneralAnimationParameter.h"

FGeneralAnimationParameter::FGeneralAnimationParameter() {
    this->MoveSpeed = 0.00f;
    this->MoveSpeedXY = 0.00f;
    this->bIsInAir = false;
    this->bIsSliding = false;
    this->bIsSwimming = false;
    this->RangeForGround = 0.00f;
    this->bIsNearGround = false;
    this->FootIKRootOffset = 0.00f;
    this->MoveSpeedPlusByRotateYaw = 0.00f;
    this->YawSpeed = 0.00f;
    this->AdditiveAnimationRate = 0.00f;
    this->DisableUpperOverrideFlag = false;
    this->bTransportingObject = false;
    this->MovementMode = MOVE_None;
    this->CustomMovementMode = EPalCharacterMovementCustomMode::None;
    this->bForceSprintForNPC = false;
    this->bUseUpperBodyOnlyWhileRidingFlag = false;
}

