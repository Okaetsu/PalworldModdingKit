#pragma once
#include "CoreMinimal.h"
#include "EPalPickingGameDifficultyType.h"
#include "PalMiniGamePackBase.h"
#include "PalPickingGameSettingData.h"
#include "Templates/SubclassOf.h"
#include "PalMiniGamePack_Picking.generated.h"

class UPalPickingGameProcessor;

UCLASS(Blueprintable)
class PAL_API UPalMiniGamePack_Picking : public UPalMiniGamePackBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPickingGameDifficultyType DifficultyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPickingGameSettingData CustomSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalPickingGameProcessor> ProcessorClass;
    
    UPalMiniGamePack_Picking();

};

