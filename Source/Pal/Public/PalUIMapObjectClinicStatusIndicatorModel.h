#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalWorkSuitability.h"
#include "PalInstanceID.h"
#include "PalUIMapObjectClinicStatusIndicatorModel.generated.h"

class UPalMapObjectClinicModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectClinicStatusIndicatorModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdateClinicStatusDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateClinicStatusDelegate OnUpdateClinicStatusDelegate;
    
    UPalUIMapObjectClinicStatusIndicatorModel();

private:
    UFUNCTION(BlueprintCallable)
    void OnClinicValuesChanged(UPalMapObjectClinicModel* Model);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStarLevelCapped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssigned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalWorkSuitability GetRequiredWorkSuitability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRawHygieneStarLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHygieneStarLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSicknessSuppressionRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSanitySuppressionRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentHygieneStarLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalInstanceID GetAssignedPalIndividualId() const;
    
};

