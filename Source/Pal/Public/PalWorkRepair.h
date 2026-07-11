#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalWorkBase.h"
#include "PalWorkLaunchRecoveryInterface.h"
#include "PalWorkRepair.generated.h"

class UPalMapObjectModel;

UCLASS(Blueprintable)
class UPalWorkRepair : public UPalWorkBase, public IPalWorkLaunchRecoveryInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ConnectToModelInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalMapObjectModel*> ConnectedModels;
    
public:
    UPalWorkRepair();


    // Fix for true pure virtual functions not being implemented
};

