#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalCutsceneSkipHandler.generated.h"

class UPalCutsceneComponent;

UCLASS(Blueprintable)
class PAL_API UPalCutsceneSkipHandler : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAllPlayersSkipCompleted);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllPlayersSkipCompleted OnAllPlayersSkipCompletedDelegate;
    
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPalCutsceneComponent>> RegisteredComponents;
    
public:
    UPalCutsceneSkipHandler();

    UFUNCTION(BlueprintCallable)
    void Initialize(int32 InExpectedCount);
    
};

