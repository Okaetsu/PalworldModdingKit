#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalOptionWorldSettings.h"
#include "PalMapObjectPhysicsManager.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectPhysicsManager : public UObject {
    GENERATED_BODY()
public:
    UPalMapObjectPhysicsManager();

    UFUNCTION(BlueprintCallable)
    void OnChangeWorldSettings(const FPalOptionWorldSettings& Prev, const FPalOptionWorldSettings& New);
    
};

