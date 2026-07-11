#pragma once
#include "CoreMinimal.h"
#include "EPalWorkTransportItemType.h"
#include "PalWorkBase.h"
#include "PalWorkLaunchRecoveryInterface.h"
#include "PalWorkTransportItemInBaseCamp.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkTransportItemInBaseCamp : public UPalWorkBase, public IPalWorkLaunchRecoveryInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkTransportItemType TransportType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ApproachFailedTimeout;
    
public:
    UPalWorkTransportItemInBaseCamp();


    // Fix for true pure virtual functions not being implemented
};

