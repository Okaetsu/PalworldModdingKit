#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordActivityAssets.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordActivityAssets : public UObject {
    GENERATED_BODY()
public:
    UDiscordActivityAssets();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString SmallUrl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString SmallText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString SmallImage();
    
    UFUNCTION(BlueprintCallable)
    void SetSmallUrl(const FString& NewSmallUrl);
    
    UFUNCTION(BlueprintCallable)
    void SetSmallText(const FString& NewSmallText);
    
    UFUNCTION(BlueprintCallable)
    void SetSmallImage(const FString& NewSmallImage);
    
    UFUNCTION(BlueprintCallable)
    void SetLargeUrl(const FString& NewLargeUrl);
    
    UFUNCTION(BlueprintCallable)
    void SetLargeText(const FString& NewLargeText);
    
    UFUNCTION(BlueprintCallable)
    void SetLargeImage(const FString& NewLargeImage);
    
    UFUNCTION(BlueprintCallable)
    void SetInviteCoverImage(const FString& NewInviteCoverImage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString LargeUrl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString LargeText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString LargeImage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString InviteCoverImage();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
};

