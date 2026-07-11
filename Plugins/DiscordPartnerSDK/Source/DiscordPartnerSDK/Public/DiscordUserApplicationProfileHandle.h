#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDiscordExternalIdentityProviderType.h"
#include "DiscordUserApplicationProfileHandle.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordUserApplicationProfileHandle : public UObject {
    GENERATED_BODY()
public:
    UDiscordUserApplicationProfileHandle();

    UFUNCTION(BlueprintCallable)
    FString Username();
    
    UFUNCTION(BlueprintCallable)
    EDiscordExternalIdentityProviderType ProviderType();
    
    UFUNCTION(BlueprintCallable)
    FString ProviderIssuedUserId();
    
    UFUNCTION(BlueprintCallable)
    FString ProviderId();
    
    UFUNCTION(BlueprintCallable)
    FString Metadata();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable)
    FString AvatarHash();
    
};

