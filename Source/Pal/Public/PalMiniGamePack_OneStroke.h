#pragma once
#include "CoreMinimal.h"
#include "PalMiniGamePackBase.h"
#include "Templates/SubclassOf.h"
#include "PalMiniGamePack_OneStroke.generated.h"

class UPalOneStrokeGameDataAsset;
class UPalOneStrokeGameProcessor;

UCLASS(Blueprintable)
class PAL_API UPalMiniGamePack_OneStroke : public UPalMiniGamePackBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalOneStrokeGameProcessor> ProcessorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalOneStrokeGameDataAsset* GameDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameDataKey;
    
    UPalMiniGamePack_OneStroke();

protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetGameSettingRowNames() const;
    
};

