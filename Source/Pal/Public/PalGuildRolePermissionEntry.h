#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "EPalGuildPermission.h"
#include "EPalGuildRole.h"
#include "PalGuildRolePermissionEntry.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildRolePermissionEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalGuildRole Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalGuildPermission> Permissions;
    
    PAL_API FPalGuildRolePermissionEntry();
};

