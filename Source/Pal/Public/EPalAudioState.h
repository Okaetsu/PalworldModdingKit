#pragma once
#include "CoreMinimal.h"
#include "EPalAudioState.generated.h"

UENUM(BlueprintType)
enum class EPalAudioState : uint8 {
    None,
    VillageA,
    VillageB,
    BaseCamp,
    InDoor,
    BossRoom,
    Grassland,
    Forest,
    Desert,
    Mountain,
    Caution,
    Fight,
    End,
    Arena_PartySelect,
    Arena_PreBattle,
    Arena_InBattle,
    Arena_Result,
    Battle_Cute,
    Battle_Cool,
    Battle_Strong,
    Battle_Human_Common,
    Battle_Human_Villain,
    Battle_FieldBoss,
    Battle_Predator,
    Battle_EyeofCthulhu,
    Battle_Machine,
    Battle_Legend,
    Battle_RaidBoss,
    Battle_TowerBoss,
    Battle_RaidBoss_KingBahamut,
    Battle_RaidBoss_DarkMechaDragon,
    Battle_RaidBoss_Moonlord,
    Explore,
    Battle,
    Alive,
    Dead,
};

