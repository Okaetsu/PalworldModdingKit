#pragma once
#include "CoreMinimal.h"
#include "EPalRelicType.h"
#include "PalLevelObjectObtainable.h"
#include "PalLevelObjectRelic.generated.h"

UCLASS(Blueprintable)
class PAL_API APalLevelObjectRelic : public APalLevelObjectObtainable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalRelicType RelicType;
    
public:
    APalLevelObjectRelic(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalRelicType GetRelicType() const;
    
};

