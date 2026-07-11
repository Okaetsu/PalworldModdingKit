#pragma once
#include "CoreMinimal.h"
#include "PalWorldSubsystem.h"
#include "PalSporeManager.generated.h"

class APalSporeFieldVolumeBase;

UCLASS(Blueprintable, Config=Game)
class PAL_API UPalSporeManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickIntervalSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnRadius;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APalSporeFieldVolumeBase>> Volumes;
    
public:
    UPalSporeManager();

};

