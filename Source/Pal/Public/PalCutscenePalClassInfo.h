#pragma once
#include "CoreMinimal.h"
#include "PalCutscenePalClassInfo.generated.h"

class APalCharacter;

USTRUCT(BlueprintType)
struct FPalCutscenePalClassInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalCharacter> CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalCharacter> BaseCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterID;
    
    PAL_API FPalCutscenePalClassInfo();
};

