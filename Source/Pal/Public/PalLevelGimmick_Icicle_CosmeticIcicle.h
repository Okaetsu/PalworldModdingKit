#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PalLevelGimmick_Icicle_CosmeticIcicle.generated.h"

UCLASS(Blueprintable)
class PAL_API APalLevelGimmick_Icicle_CosmeticIcicle : public AActor {
    GENERATED_BODY()
public:
    APalLevelGimmick_Icicle_CosmeticIcicle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetIcicleNiagaraIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetCurrentIcicleScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Deploy(const FVector& Location, const FRotator& Rotation);
    
};

