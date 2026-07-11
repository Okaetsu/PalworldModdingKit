#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnUserInfoWordFilterCompletedDelegate.h"
#include "PalUserInfoWordFilterWaiter.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalUserInfoWordFilterWaiter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserInfoWordFilterCompleted OnCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    UPalUserInfoWordFilterWaiter();

private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedPlayerNameFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedGuildNameFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
};

