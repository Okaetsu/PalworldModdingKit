#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelEffectBase.h"
#include "PalMapObjectModelEffect_OverHeat.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectModelEffect_OverHeat : public UPalMapObjectModelEffectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OverHeated, meta=(AllowPrivateAccess=true))
    bool bOverHeated;
    
public:
    UPalMapObjectModelEffect_OverHeat();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OverHeated(bool bLastValue);
    
};

