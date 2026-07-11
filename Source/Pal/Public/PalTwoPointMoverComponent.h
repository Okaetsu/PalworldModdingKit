#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PalTwoPointMoveData.h"
#include "PalTwoPointMoverComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalTwoPointMoverComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDelaySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MoveData, meta=(AllowPrivateAccess=true))
    FPalTwoPointMoveData MoveDataRep;
    
public:
    UPalTwoPointMoverComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartMove(const FVector& InStart, const FVector& InEnd, float InDuration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MoveData();
    
};

