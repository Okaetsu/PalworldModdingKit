#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OnUpdateUnlockStateDelegateDelegate.h"
#include "PalLevelObjectActor.h"
#include "PalLevelObjectWarpPointDestination.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class PAL_API APalLevelObjectWarpPointDestination : public APalLevelObjectActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateUnlockStateDelegate OnUpdateUnlockStateDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PairedDestinationLevelObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLocationIcon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
public:
    APalLevelObjectWarpPointDestination(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetWarpRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWarpDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetPairedDestinationTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetPairedDestinationLevelObjectId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetLocationId() const;
    
};

