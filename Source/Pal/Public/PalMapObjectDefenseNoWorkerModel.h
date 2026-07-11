#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectDefenseType.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectDefenseRunnableInterface.h"
#include "PalMapObjectDefenseNoWorkerModel.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalMapObjectDefenseNoWorkerModel : public UPalMapObjectConcreteModelBase, public IPalMapObjectDefenseRunnableInterface {
    GENERATED_BODY()
public:
    UPalMapObjectDefenseNoWorkerModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalMapObjectDefenseType GetDefenseType() const;
    

    // Fix for true pure virtual functions not being implemented
};

