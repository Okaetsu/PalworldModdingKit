#pragma once
#include "CoreMinimal.h"
#include "EPalGuildNotificationType.h"
#include "EPalGuildPermission.h"
#include "EPalGuildRole.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIGuildSetting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIGuildSetting : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIGuildSetting();

protected:
    UFUNCTION(BlueprintCallable)
    void SetGuildNotificationEnabled(EPalGuildNotificationType Type, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeRolePermission(EPalGuildRole TargetRole, EPalGuildPermission TargetPermission, bool bIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGuildNotificationEnabled(EPalGuildNotificationType Type) const;
    
};

