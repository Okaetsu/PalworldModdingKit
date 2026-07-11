#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SceneUtils.h"
#include "EPalDLSSGMode.h"
#include "EPalGuildNotificationType.h"
#include "EPalOptionGraphicsLevel.h"
#include "EPalOptionUpscalingLevel.h"
#include "EPalReflexMode.h"
#include "PalOptionAudioSettings.h"
#include "PalGameLocalSettings.generated.h"

UCLASS(Blueprintable, Config=GameUserSettings)
class UPalGameLocalSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionAudioSettings AudioSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalOptionGraphicsLevel GraphicsLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalOptionGraphicsLevel DefaultGraphicsLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunedBenchMark;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAppliedUserSetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DedicatedServerName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAntiAliasingMethod> AntiAliasingType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalOptionUpscalingLevel DLSSMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDLSSGMode DLSSFrameGenerationMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DLSSGeneratedFrames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalReflexMode ReflexMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GraphicsCommonQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAppliedSteamDeckSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyGuildMemberJoined;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyGuildMemberLeft;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyGuildMemberLogin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyGuildMemberLogout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideJoinByIPInput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasShownFirstLaunchUI;
    
    UPalGameLocalSettings();

    UFUNCTION(BlueprintCallable)
    static void SetHideJoinByIPInput(bool bHide);
    
    UFUNCTION(BlueprintCallable)
    void SetGuildNotificationEnabled(EPalGuildNotificationType Type, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool RequireBenchMarkScalaBility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHideJoinByIPInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGuildNotificationEnabled(EPalGuildNotificationType Type) const;
    
};

