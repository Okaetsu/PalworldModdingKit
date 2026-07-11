#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EPalFadeWidgetLayerType.h"
#include "EPalHUDWidgetPriority.h"
#include "EPalWidgetBlueprintType.h"
#include "PalStaticItemIdAndNum.h"
#include "PalUICommonExpRewardData.h"
#include "PalUICommonItemInfoDisplayData.h"
#include "PalUICommonItemRewardData.h"
#include "PalUICommonRewardDisplayData.h"
#include "PalUICommonWarningDisplayData.h"
#include "PalUIPalCaptureInfo.h"
#include "PalWorldHUDParameter.h"
#include "Templates/SubclassOf.h"
#include "UITransientData.h"
#include "PalHUDService.generated.h"

class IPalHUDServiceProviderInterface;
class UPalHUDServiceProviderInterface;
class UAkAudioEvent;
class UPalHUDDispatchParameterBase;
class UPalHUDDispatchParameter_FadeWidget;
class UPalHUDDispatchParameter_UseItem;
class UPalIndividualCharacterParameter;
class UPalItemSlot;
class UPalSoundPlayer;
class UPalUILiftSlotModel;
class UPalUserWidget;
class UPalUserWidgetStackableUI;
class UWidget;

UCLASS(Blueprintable)
class PAL_API UPalHUDService : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSuccessedCapturePal, const FPalUIPalCaptureInfo&, CaptureInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartAnyFadeOut, EPalFadeWidgetLayerType, FadeWidgetLayerType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRequestOpenChat);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPushedStackableUI, const FGuid&, pushedWidgetID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNotifyUpdateReticleVisibility, bool, bVisible);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNotifyCommonItemReward, const FPalUICommonItemRewardData&, RewardData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNotifyCommonExpReward, const FPalUICommonExpRewardData&, RewardData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFadeInAnimationCompleted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndAllFadeIn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDisplayCharacterHPGauge, UPalIndividualCharacterParameter*, Parameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeleteCharacterHPGauge, UPalIndividualCharacterParameter*, Parameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCompleteChat);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChestQuickStackDelegate, const TArray<FPalStaticItemIdAndNum>&, StackItems);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnApplicationActivationStateChangedDelegate, bool, bIsFocused);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInvalidatePlayerInputGuard);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPushedStackableUI OnPushedStackableUI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSuccessedCapturePal OnSuccessedCapturePal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnApplicationActivationStateChangedDelegate OnApplicationActivationStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInvalidatePlayerInputGuard OnInvalidatePlayerInputGuard;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotifyUpdateReticleVisibility OnNotifyUpdateReticleVisibility;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayCharacterHPGauge OnDisplayCharacterHPGauge;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeleteCharacterHPGauge OnDeleteCharacterHPGauge;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartAnyFadeOut OnStartAnyFadeOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndAllFadeIn OnEndAllFadeIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFadeInAnimationCompleted OnFadeInAnimationCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestOpenChat OnRequestOpenChat;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleteChat OnCompleteChat;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotifyCommonItemReward OnNotifyCommonItemRewardDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotifyCommonExpReward OnNotifyCommonExpRewardDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChestQuickStackDelegate OnChestQuickStackDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUITransientData TransientData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalHUDServiceProviderInterface> ServiceProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalHUDDispatchParameter_FadeWidget* FadeWidget;
    
public:
    UPalHUDService();

    UFUNCTION(BlueprintCallable)
    void StartFadeOut(EPalFadeWidgetLayerType LayerType, UPalHUDDispatchParameter_FadeWidget* FadeParameter);
    
    UFUNCTION(BlueprintCallable)
    void StartFadeIn(EPalFadeWidgetLayerType LayerType);
    
    UFUNCTION(BlueprintCallable)
    bool ShowUseItemUI(UPalItemSlot* TargetSlot, UPalHUDDispatchParameter_UseItem* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void ShowElementMatchUI(UWidget* RelativeWidget, const FVector2D& AnchorPosition);
    
    UFUNCTION(BlueprintCallable)
    void ShowCommonWarning(const FPalUICommonWarningDisplayData& WarningDisplayData);
    
    UFUNCTION(BlueprintCallable)
    FGuid ShowCommonUI(const EPalWidgetBlueprintType WBPType, UPalHUDDispatchParameterBase* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void ShowCommonReward(const FPalUICommonRewardDisplayData& RewardDisplayData);
    
    UFUNCTION(BlueprintCallable)
    void ShowCommonItemReward(const FPalUICommonItemRewardData& ItemRewardData);
    
    UFUNCTION(BlueprintCallable)
    void ShowCommonItemInfo(const FPalUICommonItemInfoDisplayData& DisplayData);
    
    UFUNCTION(BlueprintCallable)
    void ShowCommonExpReward(const FPalUICommonExpRewardData& ExpRewardData);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreMaskBossSpawnerNames(const TArray<FName>& NewNames);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDLayerHideFlag(const FGameplayTag& LayerTagName, const FName& HideReasonName, bool IsHide);
    
    UFUNCTION(BlueprintCallable)
    void RestoreIgnoreMaskFromLocalRecord();
    
    UFUNCTION(BlueprintCallable)
    void RemoveWorldHUDFromWidgetId(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWorldHUD(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHUD(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    FGuid Push(TSubclassOf<UPalUserWidgetStackableUI> WidgetClass, UPalHUDDispatchParameterBase* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void PlayAkSound(UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTopLayerUI(const FGuid& WidgetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyOverlayUIActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyFadeWidgetActive() const;
    
    UFUNCTION(BlueprintCallable)
    void InvokeTargetWidgetFunction(const FGuid& WidgetId, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable)
    void InvokeFunction_Int32(const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void InvokeFunction_FName(const FName FunctionName, FName Value);
    
    UFUNCTION(BlueprintCallable)
    void InvokeFunction(const FName FunctionName);
    
    UFUNCTION(BlueprintCallable)
    void HideElementMatchUI();
    
    UFUNCTION(BlueprintCallable)
    void HideCommonWarning(const FGuid PreserveID);
    
    UFUNCTION(BlueprintCallable)
    void HideCommonReward();
    
    UFUNCTION(BlueprintCallable)
    void HideCommonItemInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFadeQueue(EPalFadeWidgetLayerType InLayerType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalUserWidgetStackableUI* GetWidget(const FGuid& WidgetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalSoundPlayer* GetSoundPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalUILiftSlotModel* GetLiftSlotModel();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateFocusCursor();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPalHUDDispatchParameterBase* CreateDispatchParameterForK2Node(const UObject* WorldContextObject, TSubclassOf<UPalHUDDispatchParameterBase> ParameterClass);
    
    UFUNCTION(BlueprintCallable)
    void CloseOwnerStackableUI(const UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void CloseOverlayUIAll();
    
    UFUNCTION(BlueprintCallable)
    void Close(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    void ClearFadeQueue();
    
    UFUNCTION(BlueprintCallable)
    FGuid AddWorldHUD(FPalWorldHUDParameter Parameter);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddHUD(TSubclassOf<UPalUserWidget> WidgetClass, const EPalHUDWidgetPriority Priority, UPalHUDDispatchParameterBase* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePlayerInputGuard();
    
    UFUNCTION(BlueprintCallable)
    void ActivateFocusCursor(UWidget* TargetWidget);
    
};

