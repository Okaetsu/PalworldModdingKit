#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectRecyclerModelDelegateDelegate.generated.h"

class UPalMapObjectRecyclerModel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalMapObjectRecyclerModelDelegate, UPalMapObjectRecyclerModel*, Model);

