#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CountBaseCamp.generated.h"

class UPalBaseCampModel;

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_CountBaseCamp : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequireCampCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=NotifyUpdateQuest_Client, meta=(AllowPrivateAccess=true))
    int32 NowBaseCampCount;
    
public:
    UPalQuestBlock_CountBaseCamp();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnBaseCampRemoved(const FGuid BaseCampId);
    
    UFUNCTION(BlueprintCallable)
    void OnBaseCampCreated(const FGuid BaseCampId);
    
    UFUNCTION(BlueprintCallable)
    void OnBaseCampAvailable(UPalBaseCampModel* Model);
    
};

