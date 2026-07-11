#pragma once
#include "CoreMinimal.h"
#include "OnProductModeChangedDelegateDelegate.generated.h"

class UPalMapObjectMultiProductModel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnProductModeChangedDelegate, UPalMapObjectMultiProductModel*, Model, FName, NewProductId);

