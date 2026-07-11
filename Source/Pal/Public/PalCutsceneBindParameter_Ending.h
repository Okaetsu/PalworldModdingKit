#pragma once
#include "CoreMinimal.h"
#include "PalCutsceneBindParameter.h"
#include "PalCutsceneBindParameter_Ending.generated.h"

UCLASS(Blueprintable)
class UPalCutsceneBindParameter_Ending : public UPalCutsceneBindParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PalCharacterIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NPCCharacterIDs;
    
    UPalCutsceneBindParameter_Ending();

};

