#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalPalWildlifeSanctuarySplineEventType.h"
#include "PalPalWildlifeSanctuarySplineInfo.h"
#include "Templates/SubclassOf.h"
#include "PalWildlifeSanctuarySplineMoverComponent.generated.h"

class UPalWildlifeSanctuarySplineComponent;
class UPalWildlifeSanctuarySplineEventBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalWildlifeSanctuarySplineMoverComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalWildlifeSanctuarySplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAheadDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventTriggerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalPalWildlifeSanctuarySplineEventType, TSubclassOf<UPalWildlifeSanctuarySplineEventBase>> EventClassMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalPalWildlifeSanctuarySplineEventType, UPalWildlifeSanctuarySplineEventBase*> SplineEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalWildlifeSanctuarySplineEventBase* CurrentEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalPalWildlifeSanctuarySplineInfo> ScheduledEventList;
    
public:
    UPalWildlifeSanctuarySplineMoverComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Setup(UPalWildlifeSanctuarySplineComponent* InSpline);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMoveEnabled(bool bEnabled);
    
};

