#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalAnimNotifyAttackCollisionHitDelegateDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FPalAnimNotifyAttackCollisionHitDelegate, UPrimitiveComponent*, MyHitComponent, AActor*, HitActor, UPrimitiveComponent*, HitComponent, FVector, HitLocation, int32, HitCount);

