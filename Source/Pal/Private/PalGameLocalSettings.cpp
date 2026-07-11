#include "PalGameLocalSettings.h"

UPalGameLocalSettings::UPalGameLocalSettings() {
    this->GraphicsLevel = EPalOptionGraphicsLevel::High;
    this->DefaultGraphicsLevel = EPalOptionGraphicsLevel::High;
    this->bRunedBenchMark = true;
    this->bHasAppliedUserSetting = true;
    this->AntiAliasingType = AAM_TSR;
    this->DLSSMode = EPalOptionUpscalingLevel::Performance;
    this->DLSSFrameGenerationMode = EPalDLSSGMode::Auto;
    this->DLSSGeneratedFrames = 1;
    this->ReflexMode = EPalReflexMode::On;
    this->GraphicsCommonQuality = 2;
    this->bAppliedSteamDeckSettings = false;
    this->bNotifyGuildMemberJoined = false;
    this->bNotifyGuildMemberLeft = false;
    this->bNotifyGuildMemberLogin = false;
    this->bNotifyGuildMemberLogout = false;
    this->bHideJoinByIPInput = false;
    this->bHasShownFirstLaunchUI = true;
}

void UPalGameLocalSettings::SetHideJoinByIPInput(bool bHide) {
}

void UPalGameLocalSettings::SetGuildNotificationEnabled(EPalGuildNotificationType Type, bool bEnabled) {
}

bool UPalGameLocalSettings::RequireBenchMarkScalaBility() {
    return false;
}

bool UPalGameLocalSettings::GetHideJoinByIPInput() {
    return false;
}

bool UPalGameLocalSettings::GetGuildNotificationEnabled(EPalGuildNotificationType Type) const {
    return false;
}


