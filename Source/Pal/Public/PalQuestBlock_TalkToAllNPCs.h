#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_NPCUniqueData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_TalkToAllNPCs.generated.h"

class UPalNPCTalkFlowComponent;

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_TalkToAllNPCs : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_NPCUniqueData> TargetUniqueNPCIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentTalkCount, meta=(AllowPrivateAccess=true))
    int32 CurrentTalkCount;
    
public:
    UPalQuestBlock_TalkToAllNPCs();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentTalkCount();
    
    UFUNCTION(BlueprintCallable)
    void OnNPCTalkEnd(UPalNPCTalkFlowComponent* TalkFlowComponent, const FName& UniqueNPCID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTalkedToNPC(int32 NPCIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequireCount() const;
    
};

