#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalStatusID.h"
#include "PalStatusHUDRemainingTimeChangedDelegate.h"
#include "PalStatusHUDStackCountChangedDelegate.h"
#include "StatusDynamicParameter.h"
#include "PalStatusBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPalStatusBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalStatusHUDStackCountChanged OnHUDStackCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalStatusHUDRemainingTimeChanged OnHUDRemainingTimeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEndStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FStatusDynamicParameter DynamicParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EPalStatusID statusID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid InstanceGuid;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNerverEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIgnoreRemoveAll;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DurationTimer;
    
public:
    UPalStatusBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickStatus(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetHalfDurationTimer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBreakStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginSomeStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEndStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDuration() const;
    
};

