#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalEndingCutsceneProcess.generated.h"

class APalCutsceneActor;
class APalStreamingSourceActor;

UCLASS(Blueprintable)
class UPalEndingCutsceneProcess : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalStreamingSourceActor* StreamingSourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCutsceneActor* SpawnedCutsceneActor;
    
public:
    UPalEndingCutsceneProcess();

private:
    UFUNCTION(BlueprintCallable)
    void OnTeleportCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnCutsceneFinished(bool bIsSkipped);
    
};

