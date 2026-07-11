#include "PalGuildRoleUtility.h"

UPalGuildRoleUtility::UPalGuildRoleUtility() {
}

bool UPalGuildRoleUtility::CanEditRolePermission(EPalGuildRole SelfRole, EPalGuildRole TargetRole) {
    return false;
}

bool UPalGuildRoleUtility::CanChangeRole(EPalGuildRole SelfRole, EPalGuildRole CurrentTargetRole, EPalGuildRole NextTargetRole) {
    return false;
}


