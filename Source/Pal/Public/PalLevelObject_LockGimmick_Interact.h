#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractableLevelObjectInterface.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelObject_LockGimmickBase.h"
#include "Templates/SubclassOf.h"
#include "PalLevelObject_LockGimmick_Interact.generated.h"

class AActor;
class UPalActionBase;

UCLASS(Blueprintable)
class PAL_API APalLevelObject_LockGimmick_Interact : public APalLevelObject_LockGimmickBase, public IPalInteractiveObjectIndicatorInterface, public IPalInteractableLevelObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionBase> InteractActionClass;
    
public:
    APalLevelObject_LockGimmick_Interact(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void EventOnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    

    // Fix for true pure virtual functions not being implemented
};

