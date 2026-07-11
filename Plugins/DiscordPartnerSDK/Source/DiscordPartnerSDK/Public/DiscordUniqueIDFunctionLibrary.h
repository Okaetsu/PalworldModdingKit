#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DiscordUniqueID.h"
#include "DiscordUniqueIDFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class DISCORDPARTNERSDK_API UDiscordUniqueIDFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDiscordUniqueIDFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Parse_StringToDiscordUniqueID(const FString& DiscordUniqueIDString, FDiscordUniqueID& OutUniqueID, bool& Success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_DiscordUniqueIDDiscordUniqueID(const FDiscordUniqueID& Left, const FDiscordUniqueID& Right);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_DiscordUniqueIDDiscordUniqueID(const FDiscordUniqueID& Left, const FDiscordUniqueID& Right);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_DiscordUniqueIDToString(const FDiscordUniqueID& InUniqueId);
    
};

