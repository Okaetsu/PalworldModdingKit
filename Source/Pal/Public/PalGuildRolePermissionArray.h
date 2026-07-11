#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalGuildRolePermissionEntry.h"
#include "PalGuildRolePermissionArray.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildRolePermissionArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalGuildRolePermissionEntry> Items;
    
    PAL_API FPalGuildRolePermissionArray();
};

