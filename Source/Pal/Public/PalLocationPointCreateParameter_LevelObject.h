#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalRelicType.h"
#include "PalLocationCreateParameter.h"
#include "PalLocationPointCreateParameter_LevelObject.generated.h"

UCLASS(Blueprintable)
class UPalLocationPointCreateParameter_LevelObject : public UPalLocationCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalRelicType RelicType;
    
    UPalLocationPointCreateParameter_LevelObject();

};

