#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PalPlayerDataPalStorageUpdateCheckScheduler.generated.h"

UCLASS(Blueprintable)
class UPalPlayerDataPalStorageUpdateCheckScheduler : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPalPlayerDataPalStorageUpdateCheckScheduler();

};

