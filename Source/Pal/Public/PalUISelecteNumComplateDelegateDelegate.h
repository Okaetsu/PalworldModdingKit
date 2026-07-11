#pragma once
#include "CoreMinimal.h"
#include "EPalUISelectNumResult.h"
#include "PalUISelecteNumComplateDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FPalUISelecteNumComplateDelegate, EPalUISelectNumResult, resultType, int64, selectedNum);

