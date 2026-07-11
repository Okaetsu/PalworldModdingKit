#pragma once
#include "CoreMinimal.h"
#include "EPalLogContentToneType.h"
#include "EPalLogType.h"
#include "PalInstanceID.h"
#include "PalStaticItemIdAndNum.h"
#include "Templates/SubclassOf.h"
#include "PalLogAdditionalData.generated.h"

class UPalLogWidgetBase;
class UTexture2D;

USTRUCT(BlueprintType)
struct FPalLogAdditionalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> softTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalLogContentToneType logToneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultFontStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalLogWidgetBase> overrideWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalStaticItemIdAndNum ItemIDAndNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID IndividualId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalLogType LogType;
    
    PAL_API FPalLogAdditionalData();
};

