#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalUISelectNumResult.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalUISelectNumChangedNumDelegateDelegate.h"
#include "PalUISelecteNumComplateDelegateDelegate.h"
#include "PalUISelectNumParameter.generated.h"

UCLASS(Blueprintable)
class UPalUISelectNumParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalUISelecteNumComplateDelegate complateCallBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalUISelectNumChangedNumDelegate changedNumCallBacl;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 MinNum;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 MaxNum;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 defaultNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D Position;
    
    UPalUISelectNumParameter();
    UFUNCTION(BlueprintCallable)
    void InvokeComplateCallback(EPalUISelectNumResult Result, int64 selectedNum);
    
    UFUNCTION(BlueprintCallable)
    void InvokeChangedNumCallback(int64 selectedNum);
    
};

