#pragma once
#include "CoreMinimal.h"
#include "PalFlowNode_NPCTalkBase.h"
#include "PalFlowNode_NPCTalkCountReset.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalFlowNode_NPCTalkCountReset : public UPalFlowNode_NPCTalkBase {
    GENERATED_BODY()
public:
    UPalFlowNode_NPCTalkCountReset();

};

