#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalOneStrokeGameDifficultyType.h"
#include "EPalOneStrokeGameState.h"
#include "EPalOneStrokeMoveDirection.h"
#include "EPalOneStrokeTileState.h"
#include "PalOneStrokeGameSettingData.h"
#include "PalOneStrokeGridCoord.h"
#include "PalOneStrokeTileInfo.h"
#include "PalOneStrokeGameProcessor.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalOneStrokeGameProcessor : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateTileState, FPalOneStrokeGridCoord, Coord, EPalOneStrokeTileState, NewState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateCurrentPosition, FPalOneStrokeGridCoord, NewPosition);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStuck);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartGame, const FPalOneStrokeGameSettingData&, SettingData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMove, FPalOneStrokeGridCoord, FromCoord, FPalOneStrokeGridCoord, ToCoord);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInvalidMove, FPalOneStrokeGridCoord, TargetCoord);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameFail);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartGame OnStartGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMove OnMove;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateCurrentPosition OnUpdateCurrentPosition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateTileState OnUpdateTileState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInvalidMove OnInvalidMove;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStuck OnStuck;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameSuccess OnGameSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameFail OnGameFail;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalOneStrokeTileInfo> GridTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOneStrokeGameSettingData SettingData;
    
public:
    UPalOneStrokeGameProcessor();

    UFUNCTION(BlueprintCallable)
    bool TryMoveTo(FPalOneStrokeGridCoord TargetCoord);
    
    UFUNCTION(BlueprintCallable)
    bool TryMoveDirection(EPalOneStrokeMoveDirection Direction);
    
    UFUNCTION(BlueprintCallable)
    void StartNewGame();
    
    UFUNCTION(BlueprintCallable)
    void SetupBySettingData(const FPalOneStrokeGameSettingData& NewSettingData);
    
    UFUNCTION(BlueprintCallable)
    bool SelectStartPosition(FPalOneStrokeGridCoord StartCoord);
    
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStuck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVisitedTileCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalOneStrokeTileInfo GetTileAt(FPalOneStrokeGridCoord Coord) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalOneStrokeGridCoord GetStartPosition() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSettingDataByDifficultyType(EPalOneStrokeGameDifficultyType DifficultyType, FPalOneStrokeGameSettingData& OutSettingData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredVisitCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalOneStrokeTileInfo> GetGridTiles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGridSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalOneStrokeGridCoord GetGoalPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalOneStrokeGameState GetGameState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalOneStrokeGameDifficultyType GetDifficultyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalOneStrokeGridCoord GetCurrentPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalOneStrokeGridCoord> GetAvailableMoves() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMoveTo(FPalOneStrokeGridCoord TargetCoord) const;
    
};

