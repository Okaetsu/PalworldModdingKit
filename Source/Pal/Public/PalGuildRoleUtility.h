#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalGuildRole.h"
#include "PalGuildRoleUtility.generated.h"

UCLASS(Blueprintable)
class UPalGuildRoleUtility : public UObject {
    GENERATED_BODY()
public:
    UPalGuildRoleUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanEditRolePermission(EPalGuildRole SelfRole, EPalGuildRole TargetRole);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanChangeRole(EPalGuildRole SelfRole, EPalGuildRole CurrentTargetRole, EPalGuildRole NextTargetRole);
    
};

