#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordAuthorizationCodeVerifier.generated.h"

class UDiscordAuthorizationCodeChallenge;

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordAuthorizationCodeVerifier : public UObject {
    GENERATED_BODY()
public:
    UDiscordAuthorizationCodeVerifier();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Verifier();
    
    UFUNCTION(BlueprintCallable)
    void SetVerifier(const FString& NewVerifier);
    
    UFUNCTION(BlueprintCallable)
    void SetChallenge(UDiscordAuthorizationCodeChallenge* NewChallenge);
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDiscordAuthorizationCodeChallenge* Challenge();
    
};

