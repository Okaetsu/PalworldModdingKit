#pragma once
#include "CoreMinimal.h"
#include "PalCutsceneBindParameter.h"
#include "PalCutsceneBindParameter_PalAwakening.generated.h"

class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class UPalCutsceneBindParameter_PalAwakening : public UPalCutsceneBindParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterParameter* IndividualParameter;
    
    UPalCutsceneBindParameter_PalAwakening();

};

