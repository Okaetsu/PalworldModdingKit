#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SpotLightComponent.h"
#include "Templates/SubclassOf.h"
#include "PalWildlifeSanctuarySearchLightComponent.generated.h"

class AActor;
class APalPlayerCharacter;
class UPalSearchLightRotationStrategy;
class UPalSearchLightRotationStrategy_LookAt;
class UPalSearchLightRotationStrategy_Random;
class UPalSearchLightRotationStrategy_ReturnToInitial;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalWildlifeSanctuarySearchLightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDetectedPlayerDelegate, APalPlayerCharacter*, Player);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDetectedPlayerDelegate OnDetectedPlayerDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalSearchLightRotationStrategy_LookAt> LookAtStrategyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalSearchLightRotationStrategy_Random> RandomStrategyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalSearchLightRotationStrategy_ReturnToInitial> ReturnToInitialStrategyClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSearchLightRotationStrategy* CurrentRotationStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSearchLightRotationStrategy_LookAt* LookAtStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSearchLightRotationStrategy_Random* RandomStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSearchLightRotationStrategy_ReturnToInitial* ReturnToInitialStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator CurrentRotator;
    
public:
    UPalWildlifeSanctuarySearchLightComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UseRandomRotation();
    
    UFUNCTION(BlueprintCallable)
    void SetSearchEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLookTarget(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void ResetToInitialRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCurrentRotator() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearRotationStrategy();
    
};

