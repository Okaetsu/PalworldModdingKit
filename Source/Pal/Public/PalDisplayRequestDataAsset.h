#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalDisplayRequestData.h"
#include "PalDisplayRequestDataAsset.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalDisplayRequestDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalDisplayRequestData> DisplayRequestDataMap;
    
    UPalDisplayRequestDataAsset();

    UFUNCTION(BlueprintCallable)
    void Build();
    
};

