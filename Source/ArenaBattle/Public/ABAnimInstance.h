#pragma once

#include "ArenaBattle.h"
#include "Animation/AnimInstance.h"
#include "ABAnimInstance.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackHitCheckDelegate);
DECLARE_MULTICAST_DELEGATE(FOnNextAttackCheckDelegate);

UCLASS()
class ARENABATTLE_API UABAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UABAnimInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
	void PlayAttackMontage();
	void JumpToAttackMontageSection(int32 NewSection);

public:
	FOnAttackHitCheckDelegate OnAttackHitCheck;
	FOnNextAttackCheckDelegate OnNextAttackCheck;
	void SetDeadAnim() { IsDead = true; }

private:
	UFUNCTION()
	void AnimNotify_AttackHitCheck();
	void AnimNotify_NextAttackCheck();

	FName GetAttackMontageSectionName(int32 Section);

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	float CurrentPawnSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsInAir;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	UAnimMontage* AttackMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsDead;
};
