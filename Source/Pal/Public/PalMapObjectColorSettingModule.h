#pragma once
#include "CoreMinimal.h"
#include "PalColorSettingEntryArray.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectColorSettingModule.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectColorSettingModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnColorChanged, FName, Key, FLinearColor, Color);

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnColorChanged OnColorChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPalColorSettingEntryArray ColorEntries;
    
public:
    UPalMapObjectColorSettingModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

