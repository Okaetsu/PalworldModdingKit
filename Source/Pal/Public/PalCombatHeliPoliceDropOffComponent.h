#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalHeliDropOffState.h"
#include "PalCombatHeliPoliceDropOffComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalCombatHeliPoliceDropOffComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* PoliceSpawnerModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoverOffsetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundSpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavMeshProjectionRadius;
    
public:
    UPalCombatHeliPoliceDropOffComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartDropOff();
    
    UFUNCTION(BlueprintCallable)
    void SetupDropOff(int32 InPoliceNumForThisHeli, int32 InHeliIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetPoliceSpawnerModel(UObject* InModel);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPoliceDroppedOff();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDropOffComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLockedDropOffPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingDropOffCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetPoliceSpawnerModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPoliceNumForThisHeli() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetNextDropOffGroundLocation(FVector& OutGroundLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLockedHoverPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLockedDropOffPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalHeliDropOffState GetDropOffState() const;
    
    UFUNCTION(BlueprintCallable)
    bool FindAndLockDropOffPoint(const FVector& PlayerLocation, float SearchRadius, float HoverAltitude, FVector& OutDropOffPoint, FVector& OutHoverPoint);
    
    UFUNCTION(BlueprintCallable)
    bool CanDropOffAtLocation(const FVector& CheckLocation);
    
    UFUNCTION(BlueprintCallable)
    bool CanDropOffAtCurrentLocation();
    
    UFUNCTION(BlueprintCallable)
    int32 AbortDropOff();
    
};

