#include "PalUserInfoWordFilterWaiter.h"

UPalUserInfoWordFilterWaiter::UPalUserInfoWordFilterWaiter() {
    this->WorldContextObject = NULL;
}

void UPalUserInfoWordFilterWaiter::OnReceivedPlayerNameFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}

void UPalUserInfoWordFilterWaiter::OnReceivedGuildNameFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}


