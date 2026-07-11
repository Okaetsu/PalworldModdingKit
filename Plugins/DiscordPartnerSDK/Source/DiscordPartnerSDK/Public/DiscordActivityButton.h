#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordActivityButton.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordActivityButton : public UObject {
    GENERATED_BODY()
public:
    UDiscordActivityButton();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString URL();
    
    UFUNCTION(BlueprintCallable)
    void SetUrl(const FString& NewURL);
    
    UFUNCTION(BlueprintCallable)
    void SetLabel(const FString& NewLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Label();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
};

