#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.h"
#include "PalUIMapObjectStatusIndicatorParameter_Clinic.generated.h"

class UPalUIMapObjectClinicStatusIndicatorModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectStatusIndicatorParameter_Clinic : public UPalUIMapObjectStatusIndicatorParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectClinicStatusIndicatorModel* UIModel;
    
    UPalUIMapObjectStatusIndicatorParameter_Clinic();

};

