#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalCutsceneIdleAnimComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCutsceneIdleAnimComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentMontage;
    
public:
    UPalCutsceneIdleAnimComponent(const FObjectInitializer& ObjectInitializer);

};

