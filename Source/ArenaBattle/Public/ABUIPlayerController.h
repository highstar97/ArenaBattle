#pragma once

#include "ArenaBattle.h"
#include "GameFramework/PlayerController.h"
#include "ABUIPlayerController.generated.h"

UCLASS()
class ARENABATTLE_API AABUIPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UUserWidget> UIWidgetClass;

	UPROPERTY()
	class UUserWidget* UIWidgetInstance;
};
