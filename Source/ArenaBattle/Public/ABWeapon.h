#pragma once

#include "ArenaBattle.h"
#include "GameFramework/Actor.h"
#include "ABWeapon.generated.h"

UCLASS()
class ARENABATTLE_API AABWeapon : public AActor
{
	GENERATED_BODY()
	
public:
	AABWeapon();

	float GetAttackRange() const;
	float GetAttackDamage() const;
	float GetAttackModifier() const;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere, Category = Weapon)
	USkeletalMeshComponent* Weapon;

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Attack")
	float AttackRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Attack")
	float AttackDamageMin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Attack")
	float AttackDamageMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Attack")
	float AttackModifierMin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Attack")
	float AttackModifierMax;

	UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere, Category = "Attack")
	float AttackDamage;

	UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly, Category = "Attack")
	float AttackModifier;
};
