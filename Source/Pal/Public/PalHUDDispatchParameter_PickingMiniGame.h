#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameter_LockGimmickMiniGame.h"
#include "PalHUDDispatchParameter_PickingMiniGame.generated.h"

class UPalPickingGameProcessor;

UCLASS(Blueprintable)
class PAL_API UPalHUDDispatchParameter_PickingMiniGame : public UPalHUDDispatchParameter_LockGimmickMiniGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalPickingGameProcessor* Processor;
    
    UPalHUDDispatchParameter_PickingMiniGame();

    UFUNCTION(BlueprintCallable)
    void OnReceiveSuccessPicking();
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveFailPicking();
    
};

