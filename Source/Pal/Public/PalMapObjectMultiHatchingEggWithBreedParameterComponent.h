#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalMapObjectMultiHatchingEggWithBreedParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectMultiHatchingEggWithBreedParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreedRequiredRealTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChestSlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> TargetItemIds;
    
    UPalMapObjectMultiHatchingEggWithBreedParameterComponent(const FObjectInitializer& ObjectInitializer);

};

