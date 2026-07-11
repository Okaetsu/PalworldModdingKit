#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "DiscordDeviceAuthorizationArgs.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordDeviceAuthorizationArgs : public UObject {
    GENERATED_BODY()
public:
    UDiscordDeviceAuthorizationArgs();

    UFUNCTION(BlueprintCallable)
    void SetScopes(const FString& NewScopes);
    
    UFUNCTION(BlueprintCallable)
    void SetClientId(FDiscordUniqueID NewClientId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Scopes();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID ClientId();
    
};

