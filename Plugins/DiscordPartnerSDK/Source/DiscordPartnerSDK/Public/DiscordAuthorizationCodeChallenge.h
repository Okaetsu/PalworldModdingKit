#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDiscordAuthenticationCodeChallengeMethod.h"
#include "DiscordAuthorizationCodeChallenge.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordAuthorizationCodeChallenge : public UObject {
    GENERATED_BODY()
public:
    UDiscordAuthorizationCodeChallenge();

    UFUNCTION(BlueprintCallable)
    void SetMethod(EDiscordAuthenticationCodeChallengeMethod NewMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetChallenge(const FString& NewChallenge);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordAuthenticationCodeChallengeMethod Method();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Challenge();
    
};

