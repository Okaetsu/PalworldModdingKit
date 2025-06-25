#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectPlayerBedModuleOwnerInterface.h"
#include "PalMapObjectWorkerAvailableFacilityInterface.h"
#include "PalMapObjectMedicalPalBedModel.generated.h"

class AActor;
class APalCharacter;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UPalAIActionBase;
class UPalIndividualCharacterHandle;
class UPalMapObjectMedicalPalBedModel;
class UPalMapObjectMedicalPalBedSleepOnSideLocationOffsetComponent;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectMedicalPalBedModel : public UPalMapObjectConcreteModelBase, public IPalMapObjectPlayerBedModuleOwnerInterface, public IPalMapObjectWorkerAvailableFacilityInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleDelegate, UPalMapObjectMedicalPalBedModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegate OnUpdateSleepingCharacterDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterHandle* SleepingCharacterHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RemovedSleepLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AdditionalHealingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AffectSanityRate;
    
public:
    UPalMapObjectMedicalPalBedModel();

private:
    UFUNCTION(BlueprintCallable)
    void OnNightSkip();
    
    UFUNCTION(BlueprintCallable)
    void OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishSleepAction(UPalAIActionBase* action);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterHandle* GetSleepingHandle() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSleepingCharacterHandle();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CalcCharacterLocationAndRotationOffset(const FName CharacterID, const APalCharacter* Character, const FName MapObjectId, const UPalMapObjectMedicalPalBedSleepOnSideLocationOffsetComponent* LocationOffsetComponent, FVector& OutLocationOffset, FQuat& OutRotationOffset);
    

    // Fix for true pure virtual functions not being implemented
};

