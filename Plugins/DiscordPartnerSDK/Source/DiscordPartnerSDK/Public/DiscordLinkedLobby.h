#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "DiscordLinkedLobby.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordLinkedLobby : public UObject {
    GENERATED_BODY()
public:
    UDiscordLinkedLobby();

    UFUNCTION(BlueprintCallable)
    void SetLobbyId(FDiscordUniqueID NewLobbyId);
    
    UFUNCTION(BlueprintCallable)
    void SetApplicationId(FDiscordUniqueID NewApplicationId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID LobbyId();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID ApplicationId();
    
};

