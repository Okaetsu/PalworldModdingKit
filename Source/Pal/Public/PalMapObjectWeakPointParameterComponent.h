#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalAttackType.h"
#include "PalMapObjectWeakPointParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectWeakPointParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalAttackType> AllowAttackTypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNonRegularDamage;
    
    UPalMapObjectWeakPointParameterComponent(const FObjectInitializer& ObjectInitializer);

};

