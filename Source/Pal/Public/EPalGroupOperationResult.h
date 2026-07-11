#pragma once
#include "CoreMinimal.h"
#include "EPalGroupOperationResult.generated.h"

UENUM(BlueprintType)
enum class EPalGroupOperationResult : uint8 {
    Success,
    FailedNotFoundNetworkTransmitter,
    FailedCreateNewGroup,
    FailedNotFoundGroup,
    FailedNotFoundGuild,
    FailedNotFoundOrganization,
    FailedNotFoundCharacterHandle,
    FailedNotFoundCharacterIndividualID,
    FailedNotFoundCharacterParameter,
    FailedNotFoundPlayerCharacterHandle,
    FailedAlreadyBelongToGroup,
    FailedNotImplementExitNoPlayerCharacter,
    FailedAlreadyExist,
    FailedPlayerAlreadyBelongingToGuild,
    FailedBaseCampAlreadyBelongingToGuild,
    FailedPlayerNotBelongingToGuild,
    FailedGuildMaxPlayerNum,
    FailedBelongingToIndependentGuildOtherPlayer,
    FailedPermissionDeniedByNotAdmin,
    FailedAdminCannotExitGuild,
    FailedDisposeStaticOrganization,
    FailedNotEnoughSpaceStoreBackBaseCampWorkers,
    FailedGuildItemStorageNotEmpty,
    FailedOverBaseCamp,
    FailedBaseCampNotBelongingToGuild,
    FailedNotFoundBaseCamp,
    FailedBaseCampOperation,
    FailedNotImplement,
    Failed_PermissionDenied,
    FailedPermissionDenied_NoPermission,
    FailedPermissionDenied_TargetRoleHigher,
    FailedCannotChangeOwnRole,
    FailedCannotDemoteMaster,
    FailedCannotPromoteToGuildMaster,
    Failed_CannotExitGuildMaster,
};

