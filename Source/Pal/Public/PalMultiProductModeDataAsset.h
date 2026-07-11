#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalMultiProductModeData.h"
#include "PalMultiProductModeDataAsset.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMultiProductModeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMultiProductModeData> ProductInfos;
    
    UPalMultiProductModeDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetModeCount() const;
    
};

