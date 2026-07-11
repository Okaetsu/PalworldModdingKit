#pragma once
#include "CoreMinimal.h"
#include "PalStatusBase.h"
#include "PalStatus_LowGravity.generated.h"

UCLASS(Blueprintable)
class UPalStatus_LowGravity : public UPalStatusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowGravityJumpZVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAirControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirControl;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasPassiveSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasPollenSource;
    
public:
    UPalStatus_LowGravity();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLowGravityVfxOn(bool InHasPassiveSource, bool InHasPollenSource);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLowGravityVfxOff(bool InHasPassiveSource, bool InHasPollenSource);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLowGravityRefreshed(bool InHasPassiveSource, bool InHasPollenSource);
    
};

