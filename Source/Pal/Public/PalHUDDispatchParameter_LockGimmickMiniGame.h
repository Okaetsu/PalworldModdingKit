#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_LockGimmickMiniGame.generated.h"

class UPalMiniGamePackBase;

UCLASS(Blueprintable)
class PAL_API UPalHUDDispatchParameter_LockGimmickMiniGame : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalMiniGamePackBase* MiniGamePack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMiniGameSuccess;
    
    UPalHUDDispatchParameter_LockGimmickMiniGame();

};

