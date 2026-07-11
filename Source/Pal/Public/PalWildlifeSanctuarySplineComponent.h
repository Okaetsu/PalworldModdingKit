#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "PalPalWildlifeSanctuarySplineInfo.h"
#include "PalWildlifeSanctuarySplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalWildlifeSanctuarySplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalPalWildlifeSanctuarySplineInfo> SplineEventList;
    
public:
    UPalWildlifeSanctuarySplineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorldLocationAtProgressTime(float ProgressTime) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineProgressAtWorldLocation(const FVector& WorldLocation);
    
};

