#include "PalWordFilterWaiter.h"

UPalWordFilterWaiter::UPalWordFilterWaiter() {
    this->WorldContextObject = NULL;
}

void UPalWordFilterWaiter::OnReceivedFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}

UPalWordFilterWaiter* UPalWordFilterWaiter::CreateWordFilterWaiter(UObject* NewWorldContextObject, const FString& TargetString, EPalACEWordFilterSceneType SceneType) {
    return NULL;
}


