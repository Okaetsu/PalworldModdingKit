#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterWeakPoint.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterWeakPoint : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WeakPointDirection;
    
    UPalMapObjectModelInitializeExtraParameterWeakPoint();

};

