#pragma once
#include "CoreMinimal.h"
#include "PalGuildRequestFlowSequenceWaitForConfirmPlayer.h"
#include "PalGuildEnterRequestSequence_ConfirmJoinWarningToApplicantPlayer.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalGuildEnterRequestSequence_ConfirmJoinWarningToApplicantPlayer : public UPalGuildRequestFlowSequenceWaitForConfirmPlayer {
    GENERATED_BODY()
public:
    UPalGuildEnterRequestSequence_ConfirmJoinWarningToApplicantPlayer();

};

