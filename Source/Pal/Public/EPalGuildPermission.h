#pragma once
#include "CoreMinimal.h"
#include "EPalGuildPermission.generated.h"

UENUM(BlueprintType)
enum class EPalGuildPermission : uint8 {
    JoinApproval,
    Expulsion,
    RoleEdit,
    RoleAssignment,
    BuildConstruct,
    SecuritySettings,
    PalBoxConstruct,
    BasePalOperation,
};

