#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PalAnimNotifyAttackCollisionHitDelegateDelegate.h"
#include "PalAnimNotifyParameterComponent.generated.h"

class AActor;
class UPalAnimNotifyDynamicParameterBase;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalAnimNotifyParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalAnimNotifyAttackCollisionHitDelegate OnAttackCollisionHit;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UPalAnimNotifyDynamicParameterBase*> DynamicParameterMap;
    
public:
    UPalAnimNotifyParameterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BroadcastAttackCollisionHit(UPrimitiveComponent* MyHitComponent, AActor* HitActor, UPrimitiveComponent* HitComponent, FVector HitLocation, int32 HitCount);
    
};

