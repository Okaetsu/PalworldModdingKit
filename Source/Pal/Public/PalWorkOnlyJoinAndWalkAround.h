#pragma once
#include "CoreMinimal.h"
#include "PalWorkBase.h"
#include "PalWorkLaunchRecoveryInterface.h"
#include "PalWorkOnlyJoinAndWalkAround.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkOnlyJoinAndWalkAround : public UPalWorkBase, public IPalWorkLaunchRecoveryInterface {
    GENERATED_BODY()
public:
    UPalWorkOnlyJoinAndWalkAround();


    // Fix for true pure virtual functions not being implemented
};

