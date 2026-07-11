#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectWeakPointModuleDelegateDelegate.generated.h"

class UPalMapObjectWeakPointModule;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalMapObjectWeakPointModuleDelegate, UPalMapObjectWeakPointModule*, Module);

