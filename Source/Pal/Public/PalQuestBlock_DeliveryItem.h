#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_DeliveryItem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_DeliveryItem : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalDataTableRowName_ItemData, int32> RequireItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DeliveredCount, meta=(AllowPrivateAccess=true))
    int32 TotalDeliveredCount;
    
public:
    UPalQuestBlock_DeliveryItem();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DeliveredCount();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItem(const FGuid& PlayerUId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FPalDataTableRowName_ItemData, int32> GetRequireItemMap() const;
    
};

