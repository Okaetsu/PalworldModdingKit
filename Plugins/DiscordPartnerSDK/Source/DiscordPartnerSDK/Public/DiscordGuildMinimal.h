#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "DiscordGuildMinimal.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordGuildMinimal : public UObject {
    GENERATED_BODY()
public:
    UDiscordGuildMinimal();

    UFUNCTION(BlueprintCallable)
    void SetName(const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetId(FDiscordUniqueID NewID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Name();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID ID();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
};

