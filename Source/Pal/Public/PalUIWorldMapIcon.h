#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalUserWidget.h"
#include "PalUIWorldMapIcon.generated.h"

class UPalLocationBase;
class UPalLocationPoint;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIWorldMapIcon : public UPalUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPalLocationBase> SoftLocation;
    
public:
    UPalUIWorldMapIcon();

    UFUNCTION(BlueprintCallable)
    void SetLocationData(UPalLocationBase* InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetHideFlag(const FName& flagName, bool bNewHideFlag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetLocation(UPalLocationBase* InLocation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveAnyHideFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalLocationPoint* GetLocationPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetLocationOnLandscape(FVector& OutLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalLocationBase* GetLocationBase() const;
    
};

