#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PalDimensionWarpPoint.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class PAL_API APalDimensionWarpPoint : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
public:
    APalDimensionWarpPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetWarpRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWarpDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetLocationId() const;
    
};

