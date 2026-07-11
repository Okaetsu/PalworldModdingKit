#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectDefenseModelBase.h"
#include "PalMapObjectDefenseRunnableInterface.h"
#include "PalMapObjectDefenseAttackModelBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalMapObjectDefenseAttackModelBase : public UPalMapObjectDefenseModelBase, public IPalMapObjectDefenseRunnableInterface {
    GENERATED_BODY()
public:
    UPalMapObjectDefenseAttackModelBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableRunning() const;
    

    // Fix for true pure virtual functions not being implemented
};

