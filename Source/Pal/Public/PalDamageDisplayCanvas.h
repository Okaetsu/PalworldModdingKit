#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidgetPool.h"
#include "PalCalculatedDamageInfo.h"
#include "PalDamageDisplayEntry.h"
#include "PalDamageInfo.h"
#include "PalUserWidget.h"
#include "Templates/SubclassOf.h"
#include "PalDamageDisplayCanvas.generated.h"

class AActor;
class UPalUIDamageTextBase;

UCLASS(Blueprintable, EditInlineNew, Config=Pal)
class PAL_API UPalDamageDisplayCanvas : public UPalUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUserWidgetPool DamageTextWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalDamageDisplayEntry> PendingDamageEntries;
    
public:
    UPalDamageDisplayCanvas();

protected:
    UFUNCTION(BlueprintCallable)
    void SetupEvents();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReleaseDamageTextWidget(UPalUIDamageTextBase* Widget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveDamageEntries(const TArray<FPalDamageDisplayEntry>& Entries);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageDisplayTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnAddDamagePopup(const FPalDamageInfo& DamageInfo, AActor* Defender);
    
public:
    UFUNCTION(BlueprintCallable)
    UPalUIDamageTextBase* GetDamageTextWidget(TSubclassOf<UPalUIDamageTextBase> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcDisplayDamage(const FPalDamageInfo& DamageInfo, AActor* Defender, float& outSpecialDamageRate, int32& weakCount, FPalCalculatedDamageInfo& OutCalculatedDamageInfo);
    
};

