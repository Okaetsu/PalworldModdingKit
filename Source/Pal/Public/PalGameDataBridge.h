#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalGameDataBridge.generated.h"

class APalBuildObjectBaseCampPoint;
class APalCharacter;

UCLASS(Blueprintable)
class PAL_API UPalGameDataBridge : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollectIntervalSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaticStageCacheSettleDelaySec;
    
public:
    UPalGameDataBridge();

    UFUNCTION(BlueprintCallable)
    void UnregisterPalBox(APalBuildObjectBaseCampPoint* PalBox);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterCharacter(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetLatestGameDataJson(FString& OutJson) const;
    
    UFUNCTION(BlueprintCallable)
    void SetOutputEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetGameDataAPIEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCollectIntervalSec(float InIntervalSec);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPalBox(APalBuildObjectBaseCampPoint* PalBox);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCharacter(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutputEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameDataAPIEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRegisteredPalBoxCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRegisteredCharacterCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCollectIntervalSec() const;
    
};

