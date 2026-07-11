#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "DiscordActivityTimestamps.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordActivityTimestamps : public UObject {
    GENERATED_BODY()
public:
    UDiscordActivityTimestamps();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID Start();
    
    UFUNCTION(BlueprintCallable)
    void SetStart(FDiscordUniqueID NewStart);
    
    UFUNCTION(BlueprintCallable)
    void SetEnd(FDiscordUniqueID NewEnd);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUniqueID End();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
};

