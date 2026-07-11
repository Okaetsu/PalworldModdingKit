#pragma once
#include "CoreMinimal.h"
#include "EPalJetpackEffectAttachTarget.generated.h"

UENUM(BlueprintType)
enum class EPalJetpackEffectAttachTarget : uint8 {
    RootComponent,
    GliderMesh,
    CharacterMesh,
};

