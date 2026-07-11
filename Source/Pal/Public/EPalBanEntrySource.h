#pragma once
#include "CoreMinimal.h"
#include "EPalBanEntrySource.generated.h"

UENUM(BlueprintType)
enum class EPalBanEntrySource : uint8 {
    Local,
    Api,
};

