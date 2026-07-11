#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampPassiveEffectBase.h"
#include "PalBaseCampPassiveEffect_Clinic.generated.h"

class UPalBaseCampPassiveEffect_Clinic;
class UPalMapObjectClinicModel;

UCLASS(Blueprintable)
class PAL_API UPalBaseCampPassiveEffect_Clinic : public UPalBaseCampPassiveEffectBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalBaseCampPassiveEffect_Clinic*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdateClinicSuppressionDelegate;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPalMapObjectClinicModel>> SubscribedClinicModels;
    
public:
    UPalBaseCampPassiveEffect_Clinic();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleClinicValuesChanged(UPalMapObjectClinicModel* Model);
    
};

