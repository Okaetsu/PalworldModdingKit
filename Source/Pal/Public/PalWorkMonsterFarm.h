#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalWorkBase.h"
#include "PalWorkLaunchRecoveryInterface.h"
#include "PalWorkMonsterFarm.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkMonsterFarm : public UPalWorkBase, public IPalWorkLaunchRecoveryInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatInterval ActionIntervalSeconds;
    
public:
    UPalWorkMonsterFarm();


    // Fix for true pure virtual functions not being implemented
};

