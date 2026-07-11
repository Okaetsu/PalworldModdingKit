#pragma once
#include "CoreMinimal.h"
#include "PalBuildObject.h"
#include "PalBuildObjectMultiProduct.generated.h"

class UChildActorComponent;
class UPalMapObjectConcreteModelBase;

UCLASS(Blueprintable)
class PAL_API APalBuildObjectMultiProduct : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* VisualChildActorComponent;
    
public:
    APalBuildObjectMultiProduct(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationProductModeChanged();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayAnimationOnProductModeChanged_Multicast();
    
    UFUNCTION(BlueprintCallable)
    void OnSetConcreteModelAfterAvailable(UPalMapObjectConcreteModelBase* ConcreteModel);
    
};

