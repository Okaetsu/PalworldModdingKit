#pragma once
#include "CoreMinimal.h"
#include "OnPalWordFilterWaiterCompletedDelegate.generated.h"

class UPalWordFilterWaiter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPalWordFilterWaiterCompleted, UPalWordFilterWaiter*, Waiter, const FString&, FilteredString);

