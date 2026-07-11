#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalArenaSequencerInitializeParameter.h"
#include "PalArenaStartReadinessWaiter.generated.h"

UCLASS(Blueprintable)
class UPalArenaStartReadinessWaiter : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnArenaStartReady, const FPalArenaSequencerInitializeParameter&, InitParam);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalArenaSequencerInitializeParameter PendingInitParam;
    
public:
    UPalArenaStartReadinessWaiter();

private:
    UFUNCTION(BlueprintCallable)
    void Tick();
    
};

