#include "PalCurveBallTableRow.h"

FPalCurveBallTableRow::FPalCurveBallTableRow() {
    this->CurveID = EPalCurveBall::None;
    this->CurveInterval = 1.00f;
    this->ForwardVelocity = 0.00f;
    this->GravityScale = 1.00f;
    this->GravityInterval = 1.00f;
}

