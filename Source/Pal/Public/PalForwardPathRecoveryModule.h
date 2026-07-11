#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalForwardPathRecoveryModule.generated.h"

class APalAIController;

UCLASS(Blueprintable)
class PAL_API UPalForwardPathRecoveryModule : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSkipDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSkipDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StuckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StuckSpeedRatio;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalAIController* OwnerController;
    
public:
    UPalForwardPathRecoveryModule();

    UFUNCTION(BlueprintCallable)
    void TickRecovery(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetWarpGoalOffset(float InOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ResetGoalCache();
    
    UFUNCTION(BlueprintCallable)
    void Initialize(APalAIController* InOwnerController);
    
};

