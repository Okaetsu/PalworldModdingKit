#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalInvaderUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class UPalInvaderUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalInvaderUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetNearGoalDistance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetInvadeReturnTimeMinutes(const UObject* WorldContextObject);
    
};

