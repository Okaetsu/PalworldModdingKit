#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalWazaID.h"
#include "PalActiveSkill.generated.h"

class UPalWazaBulletEmiiterOverlapBase;

UCLASS(Blueprintable)
class UPalActiveSkill : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCoolTimeUpdateDelegate, float, CoolRate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCoolStateChange);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoolTimeUpdateDelegate OnCoolTimeUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoolStateChange OnCoolStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoolStateChange OnCoolFinish;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalWazaID WazaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsIgnoreRaycast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsStopTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PendingDecreaseSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RemainingSecondsAtStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CoolDownMaxAtStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DatabaseCoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime LastUsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CoolDownTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTransient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalWazaBulletEmiiterOverlapBase* BulletEmiiterOverlap;
    
public:
    UPalActiveSkill();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoolTimeFinish() const;
    
};

