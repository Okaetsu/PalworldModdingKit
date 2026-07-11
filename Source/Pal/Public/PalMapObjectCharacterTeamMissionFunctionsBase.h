#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalMapObjectCharacterTeamMissionFunctionsBase.generated.h"

class UObject;
class UPalIndividualCharacterParameter;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalMapObjectCharacterTeamMissionFunctionsBase : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMapObjectCharacterTeamMissionFunctionsBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float CalculateRewardRateByTeamStrength(const int32 TeamStrengthSum, const int32 RecommendStrength) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float CalculateRequiredSecondsRateByTeamStrength(const int32 TeamStrengthSum, const int32 RecommendStrength) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    int32 CalculateCharacterStrengthFromSaveParameterApproximately(const UObject* WorldContextObject, const FPalIndividualCharacterSaveParameter& SaveParameter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 CalculateCharacterStrength(const UPalIndividualCharacterParameter* IndividualCharacterParameter) const;
    
};

