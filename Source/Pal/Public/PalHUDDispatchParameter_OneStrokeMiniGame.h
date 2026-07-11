#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameter_LockGimmickMiniGame.h"
#include "PalHUDDispatchParameter_OneStrokeMiniGame.generated.h"

class UPalOneStrokeGameProcessor;

UCLASS(Blueprintable)
class PAL_API UPalHUDDispatchParameter_OneStrokeMiniGame : public UPalHUDDispatchParameter_LockGimmickMiniGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalOneStrokeGameProcessor* Processor;
    
    UPalHUDDispatchParameter_OneStrokeMiniGame();

    UFUNCTION(BlueprintCallable)
    void OnReceiveGameSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveGameFail();
    
};

