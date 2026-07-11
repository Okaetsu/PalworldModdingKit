#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalWildlifeSanctuaryAlertStateListenerResisterInfo.h"
#include "PalWorldSubsystem.h"
#include "PalWildlifeSanctuarySubsystem.generated.h"

class APalPlayerCharacter;
class APalWildlifeSanctuaryArea;
class IPalWildlifeSanctuaryAlertStateListenerInterface;
class UPalWildlifeSanctuaryAlertStateListenerInterface;
class UObject;

UCLASS(Blueprintable)
class PAL_API UPalWildlifeSanctuarySubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalWildlifeSanctuaryAlertStateListenerResisterInfo> DelayResisterListeners;
    
    UPalWildlifeSanctuarySubsystem();

    UFUNCTION(BlueprintCallable)
    void ResisterWildlifeSanctuaryArea(APalWildlifeSanctuaryArea* Area);
    
    UFUNCTION(BlueprintCallable)
    void ResisterAlertStateListener(TScriptInterface<IPalWildlifeSanctuaryAlertStateListenerInterface> AlertInterface, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPlayerDetected(APalPlayerCharacter* Player, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalWildlifeSanctuaryArea* FindAreaByListener(UObject* Listener) const;
    
    UFUNCTION(BlueprintCallable)
    APalWildlifeSanctuaryArea* FindArea(const FVector& Location);
    
};

