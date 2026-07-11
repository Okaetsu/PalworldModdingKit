#pragma once
#include "CoreMinimal.h"
#include "PalUIWorldMapIconTreeData.generated.h"

class UPalUIWorldMapIcon;

USTRUCT(BlueprintType)
struct FPalUIWorldMapIconTreeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPalUIWorldMapIcon> SoftIconWidget;
    
    PAL_API FPalUIWorldMapIconTreeData();
};

