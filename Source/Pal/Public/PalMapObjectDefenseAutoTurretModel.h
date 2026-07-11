#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectDefenseNoWorkerModel.h"
#include "PalMapObjectDefenseAutoTurretModel.generated.h"

class UPalBaseCampEnemyObserver;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectDefenseAutoTurretModel : public UPalMapObjectDefenseNoWorkerModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalBaseCampEnemyObserver> CachedEnemyObserver;
    
public:
    UPalMapObjectDefenseAutoTurretModel();

};

