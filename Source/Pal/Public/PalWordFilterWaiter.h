#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalACEWordFilterSceneType.h"
#include "OnPalWordFilterWaiterCompletedDelegate.h"
#include "PalWordFilterWaiter.generated.h"

class UPalWordFilterWaiter;

UCLASS(Blueprintable)
class PAL_API UPalWordFilterWaiter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPalWordFilterWaiterCompleted OnCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    UPalWordFilterWaiter();

private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPalWordFilterWaiter* CreateWordFilterWaiter(UObject* NewWorldContextObject, const FString& TargetString, EPalACEWordFilterSceneType SceneType);
    
};

