#pragma once
#include "CoreMinimal.h"
#include "EDiscordChannelType.generated.h"

UENUM(BlueprintType)
enum class EDiscordChannelType : uint8 {
    GuildText,
    Dm,
    GuildVoice,
    GroupDm,
    GuildCategory,
    GuildNews,
    GuildStore,
    GuildNewsThread = 10,
    GuildPublicThread,
    GuildPrivateThread,
    GuildStageVoice,
    GuildDirectory,
    GuildForum,
    GuildMedia,
    Lobby,
    EphemeralDm,
};

