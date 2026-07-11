#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "PalDialogBoolCallbackDelegate.h"
#include "PalInteractLockSettingDataSet.h"
#include "PalInteractLockSettingComponent.generated.h"

class UPalInteractLockSettingComponentCustomMsgIdChooser;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalInteractLockSettingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInteractLockSettingDataSet LockSettingDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle MsgID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalInteractLockSettingComponentCustomMsgIdChooser> CustomMsgIdChooserClass;
    
public:
    UPalInteractLockSettingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowDialogWithCallback_LocalPlayer(FPalDialogBoolCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void ShowDialog_LocalPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked(const FGuid& PlayerUId) const;
    
};

