#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalLevelObjectWarpPointToLocationPerformanceBase.generated.h"

class APalLevelObjectWarpPointToLocation;
class APalPlayerCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class PAL_API UPalLevelObjectWarpPointToLocationPerformanceBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPerformanceFinishedBP, APalPlayerCharacter*, Player);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPerformanceFinishedBP OnFinishedDelegateBP;
    
    UPalLevelObjectWarpPointToLocationPerformanceBase();

    UFUNCTION(BlueprintCallable)
    void Execute(APalPlayerCharacter* Player, APalLevelObjectWarpPointToLocation* Owner);
    
};

