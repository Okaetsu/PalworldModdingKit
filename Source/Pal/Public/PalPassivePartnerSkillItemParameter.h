#pragma once
#include "CoreMinimal.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "EPalWeaponType.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalPassivePartnerSkillItemParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalPassivePartnerSkillItemParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalItemTypeA ItemTypeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalItemTypeB ItemTypeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> ItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> ExcludedItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsContainNoItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalWeaponType> WeaponTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMeleeOnly;
    
    PAL_API FPalPassivePartnerSkillItemParameter();
};

