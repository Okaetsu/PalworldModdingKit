#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_PalFight.generated.h"

class APalLevelObject_LockGimmickPalFight;

UCLASS(Blueprintable)
class PAL_API UPalHUDDispatchParameter_PalFight : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalLevelObject_LockGimmickPalFight> Gimmick;
    
    UPalHUDDispatchParameter_PalFight();

};

