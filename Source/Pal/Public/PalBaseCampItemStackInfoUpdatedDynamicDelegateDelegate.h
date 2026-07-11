#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampItemStackInfoUpdatedDynamicDelegateDelegate.generated.h"

class UPalBaseCampModuleItemStackInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPalBaseCampItemStackInfoUpdatedDynamicDelegate, UPalBaseCampModuleItemStackInfo*, ItemStackInfoModule);

