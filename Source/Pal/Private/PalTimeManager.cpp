#include "PalTimeManager.h"

UPalTimeManager::UPalTimeManager() {
    this->SleepingPlayerNum = 0;
    this->EmissiveTimeForStage = 23.00f;
    this->EmissiveInGameTimeOverride = 0.00f;
}


void UPalTimeManager::SetTimeOverrideForEmissive(float InTime, float InDuration) {
}

void UPalTimeManager::SetGameTime_FixDay(const int32 NextHour) {
}

void UPalTimeManager::ResetTimeOverrideForEmissive(float InDuration) {
}

FString UPalTimeManager::PalTimeSecondsToString(float InSeconds) {
    return TEXT("");
}

int32 UPalTimeManager::GetSleepingPlayerCount(const bool bForceLocalPlayerSleep) const {
    return 0;
}

float UPalTimeManager::GetEmissiveTimeValue() const {
    return 0.0f;
}

FString UPalTimeManager::GetDebugTimeString() const {
    return TEXT("");
}

float UPalTimeManager::GetDayTimePassRate() {
    return 0.0f;
}

int32 UPalTimeManager::GetCurrentPalWorldTime_TotalDay() const {
    return 0;
}

int32 UPalTimeManager::GetCurrentPalWorldTime_Second() const {
    return 0;
}

int32 UPalTimeManager::GetCurrentPalWorldTime_Minute() const {
    return 0;
}

int32 UPalTimeManager::GetCurrentPalWorldTime_Hour() const {
    return 0;
}

int32 UPalTimeManager::GetCurrentPalWorldTime_Day() const {
    return 0;
}

float UPalTimeManager::GetCurrentPalWorldHoursFloat() const {
    return 0.0f;
}

EPalOneDayTimeType UPalTimeManager::GetCurrentDayTimeType() const {
    return EPalOneDayTimeType::Undefined;
}

void UPalTimeManager::ClearTimer(const UObject* WorldContextObject, const FPalTimerHandle& Handle) {
}

FPalTimerHandle UPalTimeManager::AddTimerEventBySpan(const UPalTimeManager::FTimerEventDelegate& Delegate, const float Hours, const float Minutes, const float Seconds) {
    return FPalTimerHandle{};
}


