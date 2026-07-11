#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "PalCutsceneComponent.generated.h"

class AActor;
class APalCutsceneActor;
class APalCutsceneHideVolume;
class UPalCutsceneSkipHandler;
class UPalHUDDispatchParameter_FadeWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCutsceneComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSkipCountUpdated, int32, SkipCount, int32, TotalCount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCutsceneFinishDelegate, bool, bIsSkipped);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCutsceneDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneDelegate OnPrePlayCutsceneDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneDelegate OnPlayCutsceneDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneFinishDelegate OnFinishCutsceneDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkipCountUpdated OnSkipCountUpdatedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalCutsceneActor* CutsceneActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalCutsceneSkipHandler* SkipHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalHUDDispatchParameter_FadeWidget* FadeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalHUDDispatchParameter_FadeWidget* FinishFadeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalCutsceneHideVolume> ActiveHideVolume;
    
public:
    UPalCutsceneComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UpdateSkipCount_ToClient(int32 SkipCount, int32 TotalCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StopCutsceneToServer();
    
    UFUNCTION(BlueprintCallable)
    void StopCutscene();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartFinishFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void StartFadeIn();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void StartAllPlayersSkipMode_ToClient(int32 InTotalCount);
    
    UFUNCTION(BlueprintCallable)
    APalCutsceneActor* SpawnCutsceneActor(TSubclassOf<APalCutsceneActor> CutsceneActorClass, FVector Location, FRotator Rotation, AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    void SetSkipHandler(UPalCutsceneSkipHandler* InHandler);
    
    UFUNCTION(BlueprintCallable)
    void SetCanSkip(bool bInCanSkip);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestAllPlayersSkip_ToServer();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PlayCutsceneToServer();
    
    UFUNCTION(BlueprintCallable)
    void PlayCutscene(APalCutsceneActor* InCutsceneActor, bool IsAutoDestroy, bool bInAllPlayersSkipMode);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnEndFinishFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void OnEndFadeIn();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyCutsceneFinished_ToServer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingCutscene() const;
    
    UFUNCTION(BlueprintCallable)
    void HideAdditionalActors(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingSeconds() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ForceStopCutscene_ToClient();
    
    UFUNCTION(BlueprintCallable)
    void AddPlaybackTimeSeconds(float DeltaTimeInSeconds);
    
};

