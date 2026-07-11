#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalAICombatModule_Wild.h"
#include "PalAICombatModule_CombatHeli.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalAICombatModule_CombatHeli : public UPalAICombatModule_Wild {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SpawnedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleEndDistance;
    
public:
    UPalAICombatModule_CombatHeli();

    UFUNCTION(BlueprintCallable)
    AActor* FindAimTarget(float Range);
    
};

