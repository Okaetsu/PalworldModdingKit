#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnGuildNameUpdatedWithGroupIdDelegate.h"
#include "PalGuildNameUpdateWatcher.generated.h"

class UPalGroupGuildBase;

UCLASS(Blueprintable)
class PAL_API UPalGuildNameUpdateWatcher : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGuildNameUpdatedWithGroupId OnUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalGroupGuildBase* Guild;
    
public:
    UPalGuildNameUpdateWatcher();

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatedGuildName_Binded(const FString& NewGuildName);
    
};

