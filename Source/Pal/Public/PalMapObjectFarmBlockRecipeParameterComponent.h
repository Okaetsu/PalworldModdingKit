#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalDataTableRowName_FarmCropData.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectFarmBlockRecipeParameterComponent.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectFarmBlockRecipeParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_FarmCropData> AvailableCropDataIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIClass;
    
    UPalMapObjectFarmBlockRecipeParameterComponent(const FObjectInitializer& ObjectInitializer);

};

