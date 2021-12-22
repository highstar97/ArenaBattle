#pragma once

#include "ArenaBattle.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

UCLASS()
class ARENABATTLE_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AABPlayerController();

	void ChangeInputMode(bool bGameMode = true);
	void ShowResultUI();

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UABHUDWidget> HUDWidgetClass;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UABGameplayWidget> MenuWidgetClass;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UABGameplayResultWidget> ResultWidgetClass;

public:
	virtual void PostInitializeComponents() override;
	virtual void OnPossess(APawn* aPawn) override;
	
	class UABHUDWidget* GetHUDWidget() const;
	void NPCKill(class AABCharacter* KilledNPC) const;
	void AddGameScore() const;

private:
	void OnGamePause();

	UPROPERTY()
	class UABHUDWidget* HUDWidget;

	UPROPERTY()
	class AABPlayerState* ABPlayerState;

	UPROPERTY()
	class UABGameplayWidget* MenuWidget;

	UPROPERTY()
	class UABGameplayResultWidget* ResultWidget;

	FInputModeGameOnly GameInputMode;
	FInputModeUIOnly UIInputMode;
};
