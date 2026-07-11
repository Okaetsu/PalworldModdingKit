#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalPlayerPlatform.h"
#include "PalCachedUserInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCachedUserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GuildName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPlayerPlatform PlayerPlatform;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CachedTimeSec;
    
    PAL_API FPalCachedUserInfo();
};

