#pragma once
#include "CoreMinimal.h"
#include "PalDamageInfo.h"
#include "PalMapObjectItemDropOnDamagModel.h"
#include "PalMapObjectItemDropOnDamagAutoDecayModel.generated.h"

class APalCharacter;
class UPalMapObjectModel;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectItemDropOnDamagAutoDecayModel : public UPalMapObjectItemDropOnDamagModel {
    GENERATED_BODY()
public:
    UPalMapObjectItemDropOnDamagAutoDecayModel();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldRustByCharacter(APalCharacter* Character) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDamageForRust_ServerInternal(UPalMapObjectModel* Model, const FPalDamageInfo& DamageInfo, int32 LastHp);
    
};

