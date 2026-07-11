#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalRecyclerRelicItemSetting.h"
#include "PalMapObjectRecyclerParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectRecyclerParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalDataTableRowName_ItemData, FPalRecyclerRelicItemSetting> RelicItemSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData BoostItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecycleBoostBuffDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecycleBoostSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoostItemSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RelicItemSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputSlotCountDisplayCount;
    
    UPalMapObjectRecyclerParameterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidRelicItem(const FPalDataTableRowName_ItemData& ItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRequiredWorkAmountForRelic(const FPalDataTableRowName_ItemData& RelicItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLotteryNameForRelic(const FPalDataTableRowName_ItemData& RelicItemId) const;
    
};

