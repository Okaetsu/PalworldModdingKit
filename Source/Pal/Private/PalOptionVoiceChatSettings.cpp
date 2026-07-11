#include "PalOptionVoiceChatSettings.h"

FPalOptionVoiceChatSettings::FPalOptionVoiceChatSettings() {
    this->bVoiceChatMuteMyself = false;
    this->bVoiceChatMuteOthers = false;
    this->VoiceChatInputVolume = 0.00f;
    this->VoiceChatOutputVolume = 0.00f;
    this->bVoiceChatPushToTalk = false;
    this->VoiceChatTokenType = 0;
}

