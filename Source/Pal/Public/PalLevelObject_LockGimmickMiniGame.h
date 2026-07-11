#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractableLevelObjectInterface.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelObject_LockGimmickBase.h"
#include "PalLevelObject_LockGimmickMiniGame.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UPalHUDDispatchParameterBase;
class UPalMiniGamePackBase;

UCLASS(Blueprintable)
class PAL_API APalLevelObject_LockGimmickMiniGame : public APalLevelObject_LockGimmickBase, public IPalInteractableLevelObjectInterface, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalMiniGamePackBase> MiniGamePackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalInteractiveObjectComponentInterface> InteractComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalHUDDispatchParameterBase* CurrentParameter;
    
public:
    APalLevelObject_LockGimmickMiniGame(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnMiniGameComplete(UPalHUDDispatchParameterBase* Parameter);
    

    // Fix for true pure virtual functions not being implemented
};

