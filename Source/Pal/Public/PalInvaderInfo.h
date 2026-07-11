#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "PalInvaderInfo.generated.h"

class APalInvaderInfo;

UCLASS(Blueprintable)
class APalInvaderInfo : public AInfo {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStartWaveDelegate, APalInvaderInfo*, SelfInvaderInfo, int32, NewWaveCount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEndWaveDelegate, APalInvaderInfo*, SelfInvaderInfo, int32, EndWaveCount);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartWaveDelegate OnStartWaveDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndWaveDelegate OnEndWaveDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDateTime StartRealTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid BaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 InvadeGrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsFirstWaveStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 WaveMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDateTime WaveEndRealTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDateTime WaveIntervalEndRealTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid BroadcastGroupId;
    
public:
    APalInvaderInfo(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaveTimeup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaveClear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRelativePlayer(const FGuid PlayerUId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWaveMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainWaveIntervalEndRealTimeSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainWaveEndRealTimeSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainInvadeStartRealTimeSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetBaseCampId() const;
    
};

