#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordUniqueID.h"
#include "DiscordUserMessageSummary.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordUserMessageSummary : public UObject {
    GENERATED_BODY()
public:
    UDiscordUserMessageSummary();

    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID UserId();
    
    UFUNCTION(BlueprintCallable)
    FDiscordUniqueID LastMessageId();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
};

