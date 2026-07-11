#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalLevelGimmick_Icicle_Bullet.generated.h"

UINTERFACE(Blueprintable)
class PAL_API UPalLevelGimmick_Icicle_Bullet : public UInterface {
    GENERATED_BODY()
};

class PAL_API IPalLevelGimmick_Icicle_Bullet : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Deploy(const FVector& Location, const FRotator& Rotation, float InitialIcicleScale, int32 IcicleNiagaraIndex);
    
};

