#pragma once
#include "CoreMinimal.h"
#include "PalPendingRegeneRemove.generated.h"

class UObject;
class UPalPassiveRegene;

USTRUCT(BlueprintType)
struct FPalPendingRegeneRemove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> OwnerObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalPassiveRegene* Regene;
    
    PAL_API FPalPendingRegeneRemove();
};

