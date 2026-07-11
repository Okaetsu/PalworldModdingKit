#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterPalEgg.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterPalEgg : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWorldTreePalEgg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMutationPalEgg;
    
    UPalMapObjectModelInitializeExtraParameterPalEgg();
};

