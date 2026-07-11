#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PalFogParameterBlendConfig.h"
#include "PalPostProcessHeightFogWorldSubsystem.generated.h"

UCLASS(Blueprintable, Config=Game)
class PAL_API UPalPostProcessHeightFogWorldSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalFogParameterBlendConfig FogDensityBlendConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalFogParameterBlendConfig FogHeightFalloffBlendConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalFogParameterBlendConfig FogInscatteringColorBlendConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalFogParameterBlendConfig SkyAtmosphereAmbientContributionColorScaleBlendConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalFogParameterBlendConfig FogMaxOpacityBlendConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalFogParameterBlendConfig StartDistanceBlendConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalFogParameterBlendConfig FogCutoffDistanceBlendConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalFogParameterBlendConfig VolumetricFogScatteringDistributionBlendConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalFogParameterBlendConfig VolumetricFogAlbedoBlendConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalFogParameterBlendConfig VolumetricFogEmissiveBlendConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalFogParameterBlendConfig VolumetricFogExtinctionScaleBlendConfig;
    
    UPalPostProcessHeightFogWorldSubsystem();

};

