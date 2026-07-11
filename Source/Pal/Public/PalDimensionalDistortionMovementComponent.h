#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "PalDimensionalDistortionMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalDimensionalDistortionMovementComponent : public UFloatingPawnMovement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArrivalThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
public:
    UPalDimensionalDistortionMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocation(const FVector& InTargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementSpeed(float InSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpSpeed(float InInterpSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReachedTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetLocation() const;
    
};

