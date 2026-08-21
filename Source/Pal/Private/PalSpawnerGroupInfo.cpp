#include "PalSpawnerGroupInfo.h"

FPalSpawnerGroupInfo::FPalSpawnerGroupInfo() {
    this->Weight = 1;
    this->OnlyTime = EPalOneDayTimeType::Undefined;
    this->OnlyWeather = EPalWeatherConditionType::Undefined;
    this->bHasWorldTreeAura = false;
}

