#include "BuildingSurfaceMaterialSet.h"

FBuildingSurfaceMaterialSet::FBuildingSurfaceMaterialSet() {
    this->Highlight = NULL;
    this->HighlightTwoSided = NULL;
    this->HighlightWorkPositionVisualizer = NULL;
    this->Error = NULL;
    this->ErrorTwoSided = NULL;
    this->ErrorWorkPositionVisualizer = NULL;
    this->Building = NULL;
    this->BuildingTwoSided = NULL;
    this->BuildComplete = NULL;
    this->BuildCompleteTwoSided = NULL;
    this->Dismantle = NULL;
    this->DismantleTwoSided = NULL;
    this->Damage = NULL;
    this->BuildCompleteAnimationCurve = NULL;
}

