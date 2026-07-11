#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "EDiscordIntegrationType.h"
#include "DiscordAuthorizationArgs.generated.h"

class UDiscordAuthorizationCodeChallenge;

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordAuthorizationArgs : public UObject {
    GENERATED_BODY()
public:
    UDiscordAuthorizationArgs();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString State();
    
    UFUNCTION(BlueprintCallable)
    void SetState(const FString& NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetScopes(const FString& NewScopes);
    
    UFUNCTION(BlueprintCallable)
    void SetNonce(const FString& NewNonce);
    
    UFUNCTION(BlueprintCallable)
    void SetIntegrationType(EDiscordIntegrationType NewIntegrationType);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomSchemeParam(const FString& NewCustomSchemeParam);
    
    UFUNCTION(BlueprintCallable)
    void SetCodeChallenge(UDiscordAuthorizationCodeChallenge* NewCodeChallenge);
    
    UFUNCTION(BlueprintCallable)
    void SetClientId(FDiscordUniqueID NewClientId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Scopes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Nonce();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordIntegrationType IntegrationType();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString CustomSchemeParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDiscordAuthorizationCodeChallenge* CodeChallenge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID ClientId();
    
};

