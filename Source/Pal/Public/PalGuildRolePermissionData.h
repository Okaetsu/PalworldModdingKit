#pragma once
#include "CoreMinimal.h"
#include "EPalGuildPermission.h"
#include "EPalGuildRole.h"
#include "PalGuildRolePermissionData.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildRolePermissionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalGuildRole Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalGuildPermission> Permissions;
    
    PAL_API FPalGuildRolePermissionData();
};

