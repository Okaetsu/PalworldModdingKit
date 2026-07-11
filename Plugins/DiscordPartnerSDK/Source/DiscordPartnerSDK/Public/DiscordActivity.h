#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "EDiscordActivityGamePlatforms.h"
#include "EDiscordActivityTypes.h"
#include "EDiscordStatusDisplayTypes.h"
#include "DiscordActivity.generated.h"

class UDiscordActivity;
class UDiscordActivityAssets;
class UDiscordActivityButton;
class UDiscordActivityParty;
class UDiscordActivitySecrets;
class UDiscordActivityTimestamps;

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordActivity : public UObject {
    GENERATED_BODY()
public:
    UDiscordActivity();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordActivityTypes Type();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDiscordActivityTimestamps* Timestamps();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordActivityGamePlatforms SupportedPlatforms();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordStatusDisplayTypes StatusDisplayType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString StateUrl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString State();
    
    UFUNCTION(BlueprintCallable)
    void SetType(EDiscordActivityTypes NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetTimestamps(UDiscordActivityTimestamps* NewTimestamps);
    
    UFUNCTION(BlueprintCallable)
    void SetSupportedPlatforms(EDiscordActivityGamePlatforms NewSupportedPlatforms);
    
    UFUNCTION(BlueprintCallable)
    void SetStatusDisplayType(EDiscordStatusDisplayTypes NewStatusDisplayType);
    
    UFUNCTION(BlueprintCallable)
    void SetStateUrl(const FString& NewStateUrl);
    
    UFUNCTION(BlueprintCallable)
    void SetState(const FString& NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetSecrets(UDiscordActivitySecrets* NewSecrets);
    
    UFUNCTION(BlueprintCallable)
    void SetParty(UDiscordActivityParty* NewParty);
    
    UFUNCTION(BlueprintCallable)
    void SetParentApplicationId(FDiscordUniqueID NewParentApplicationId);
    
    UFUNCTION(BlueprintCallable)
    void SetName(const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetDetailsUrl(const FString& NewDetailsUrl);
    
    UFUNCTION(BlueprintCallable)
    void SetDetails(const FString& NewDetails);
    
    UFUNCTION(BlueprintCallable)
    void SetAssets(UDiscordActivityAssets* NewAssets);
    
    UFUNCTION(BlueprintCallable)
    void SetApplicationId(FDiscordUniqueID NewApplicationId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDiscordActivitySecrets* Secrets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDiscordActivityParty* Party();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID ParentApplicationId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Name();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    TArray<UDiscordActivityButton*> GetButtons();
    
    UFUNCTION(BlueprintCallable)
    bool Equals(UDiscordActivity* Other);
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString DetailsUrl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Details();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDiscordActivityAssets* Assets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID ApplicationId();
    
    UFUNCTION(BlueprintCallable)
    void AddButton(UDiscordActivityButton* Button);
    
};

