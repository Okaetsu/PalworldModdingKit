#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "PalRightStickScrollSubsystem.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UPalRightStickScrollSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultListViewScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultNavInputsPerSecond;
    
    UPalRightStickScrollSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterScrollTarget(UWidget* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RegisterScrollTarget(UWidget* Target, float SpeedOverride, float NavInputsPerSecondOverride);
    
};

