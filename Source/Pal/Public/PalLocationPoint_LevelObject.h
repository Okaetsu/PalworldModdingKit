#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPalRelicType.h"
#include "PalLocationPoint.h"
#include "PalLocationPoint_LevelObject.generated.h"

class UPalPlayerRecordData;

UCLASS(Blueprintable)
class UPalLocationPoint_LevelObject : public UPalLocationPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPlayerRecordData* ObservedRecordData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid LevelObjectInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector InitialLocationCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalRelicType RelicType;
    
public:
    UPalLocationPoint_LevelObject();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateRelicObtainedRecord(FName Key, bool bObtained);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalRelicType GetRelicType() const;
    
};

