#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDiscordErrorType.h"
#include "DiscordClientResult.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordClientResult : public UObject {
    GENERATED_BODY()
public:
    UDiscordClientResult();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordErrorType Type();
    
    UFUNCTION(BlueprintCallable)
    FString ToString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Successful();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Status();
    
    UFUNCTION(BlueprintCallable)
    void SetType(EDiscordErrorType NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetSuccessful(bool NewSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void SetStatus(int32 NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetRetryAfter(float NewRetryAfter);
    
    UFUNCTION(BlueprintCallable)
    void SetRetryable(bool NewRetryable);
    
    UFUNCTION(BlueprintCallable)
    void SetResponseBody(const FString& NewResponseBody);
    
    UFUNCTION(BlueprintCallable)
    void SetErrorCode(int32 NewErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void SetError(const FString& NewError);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float RetryAfter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Retryable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ResponseBody();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ErrorCode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Error();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
};

