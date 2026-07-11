#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDiscordAdditionalContentType.h"
#include "DiscordAdditionalContent.generated.h"

class UDiscordAdditionalContent;

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordAdditionalContent : public UObject {
    GENERATED_BODY()
public:
    UDiscordAdditionalContent();

    UFUNCTION(BlueprintCallable)
    static FString TypeToString(EDiscordAdditionalContentType NewType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordAdditionalContentType Type();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Title();
    
    UFUNCTION(BlueprintCallable)
    void SetType(EDiscordAdditionalContentType NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetTitle(const FString& NewTitle);
    
    UFUNCTION(BlueprintCallable)
    void SetCount(uint8 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    bool Equals(UDiscordAdditionalContent* rhs);
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 Count();
    
};

