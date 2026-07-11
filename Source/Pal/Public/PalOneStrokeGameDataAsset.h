#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalOneStrokeGameGenerateSettingData.h"
#include "PalOneStrokeGameSettingData.h"
#include "PalOneStrokeGameDataAsset.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalOneStrokeGameDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalOneStrokeGameSettingData> GameSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOneStrokeGameGenerateSettingData VeryEasyGenerateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOneStrokeGameGenerateSettingData EasyGenerateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOneStrokeGameGenerateSettingData NormalGenerateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOneStrokeGameGenerateSettingData HardGenerateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOneStrokeGameGenerateSettingData VeryHardGenerateData;
    
    UPalOneStrokeGameDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetGameSetting(FName Key, FPalOneStrokeGameSettingData& OutData) const;
    
    UFUNCTION(BlueprintCallable)
    void AddNewVeryHardSetting();
    
    UFUNCTION(BlueprintCallable)
    void AddNewVeryEasySetting();
    
    UFUNCTION(BlueprintCallable)
    void AddNewNormalSetting();
    
    UFUNCTION(BlueprintCallable)
    void AddNewHardSetting();
    
    UFUNCTION(BlueprintCallable)
    void AddNewEasySetting();
    
};

