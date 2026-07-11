#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "PalJetpackNiagaraEffectConfig.h"
#include "PalAnimNotifyState_JetpackEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PAL_API UPalAnimNotifyState_JetpackEffect : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalJetpackNiagaraEffectConfig NormalFlightEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalJetpackNiagaraEffectConfig BoostFlightEffect;
    
public:
    UPalAnimNotifyState_JetpackEffect();

};

