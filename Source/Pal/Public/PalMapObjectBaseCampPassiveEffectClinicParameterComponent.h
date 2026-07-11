#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectBaseCampPassiveEffectParameterComponentBase.h"
#include "PalMapObjectBaseCampPassiveEffectClinicParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectBaseCampPassiveEffectClinicParameterComponent : public UPalMapObjectBaseCampPassiveEffectParameterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSanitySuppressRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClinicAssignedSanityRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSicknessSuppressRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHygieneStarLevel;
    
    UPalMapObjectBaseCampPassiveEffectClinicParameterComponent(const FObjectInitializer& ObjectInitializer);

};

