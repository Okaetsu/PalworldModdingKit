#include "PalBossBattleInstanceRoot.h"
#include "Components/SceneComponent.h"

APalBossBattleInstanceRoot::APalBossBattleInstanceRoot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->bIsLoaded = false;
    this->Difficulty = EPalBossBattleDifficulty::None;
    this->BossType = EPalBossType::None;
    this->SceneRootComponent = (USceneComponent*)RootComponent;
}



FBox APalBossBattleInstanceRoot::GetStageAreaBounds_Implementation() const {
    return FBox{};
}




EPalBossType APalBossBattleInstanceRoot::GetBossType() const {
    return EPalBossType::None;
}


void APalBossBattleInstanceRoot::BossSpawned_Implementation(APalCharacter* SpawnedCharacter) {
}


