#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameter_LockGimmickMiniGame.h"
#include "PalHUDDispatchParameter_GaugeStopMiniGame.generated.h"

class UPalUIMapObjectTreasureBoxSalvageGameModel;

UCLASS(Blueprintable)
class PAL_API UPalHUDDispatchParameter_GaugeStopMiniGame : public UPalHUDDispatchParameter_LockGimmickMiniGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectTreasureBoxSalvageGameModel* Model;
    
    UPalHUDDispatchParameter_GaugeStopMiniGame();

    UFUNCTION(BlueprintCallable)
    void OnReceiveMiniGameResult(const bool bResult);
    
};

