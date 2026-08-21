#include "PalOptionVoiceChatSettings.h"

FPalOptionVoiceChatSettings::FPalOptionVoiceChatSettings() {
    this->bVoiceChatMuteMyself = true;
    this->bVoiceChatMuteOthers = true;
    this->VoiceChatInputVolume = 100.00f;
    this->VoiceChatOutputVolume = 100.00f;
    this->bVoiceChatPushToTalk = false;
    this->VoiceChatTokenType = 0;
}

