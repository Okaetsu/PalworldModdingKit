#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalCryComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCryComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPalCryComponentBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedPlayCryWithCT(const FName& EmoState, float InExternalCT);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedPlayCry(const FName& EmoState);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastPlayCry_ToAll(const FName& EmoState);
    
};

