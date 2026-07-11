#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampWorkerSickType.h"
#include "PalInstanceID.h"
#include "PalMapObjectBaseCampPassiveEffectModel.h"
#include "PalMapObjectClinicModel.generated.h"

class UPalIndividualCharacterParameter;
class UPalMapObjectBaseCampPassiveEffectClinicParameterComponent;
class UPalMapObjectClinicModel;
class UPalWorkAssign;
class UPalWorkBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectClinicModel : public UPalMapObjectBaseCampPassiveEffectModel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClinicValuesChangedDelegate, UPalMapObjectClinicModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClinicValuesChangedDelegate OnClinicValuesChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentSicknessSuppressionRate, meta=(AllowPrivateAccess=true))
    float CurrentSicknessSuppressionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentSanitySuppressionRate, meta=(AllowPrivateAccess=true))
    float CurrentSanitySuppressionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentHygieneStarLevelRaw, meta=(AllowPrivateAccess=true))
    int32 CurrentHygieneStarLevelRaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentAssignedMedicineLv, meta=(AllowPrivateAccess=true))
    int32 CurrentAssignedMedicineLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxHygieneStarLevel;
    
public:
    UPalMapObjectClinicModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateAssignedCharacter(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnUnassignedCharacter_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentSicknessSuppressionRate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentSanitySuppressionRate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentHygieneStarLevelRaw();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentAssignedMedicineLv();
    
    UFUNCTION(BlueprintCallable)
    void OnAssignWork_ServerInternal(UPalWorkBase* Work, UPalWorkAssign* WorkAssign);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSicknessSuppressionRateFor(EPalBaseCampWorkerSickType SickType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHygieneStarLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSicknessSuppressionRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSanitySuppressionRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentHygieneStarLevelRaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAssignedMedicineLv() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectBaseCampPassiveEffectClinicParameterComponent* GetClinicParameterComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAssignedMedicineLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterParameter* GetAssignedCharacterParameter() const;
    
};

