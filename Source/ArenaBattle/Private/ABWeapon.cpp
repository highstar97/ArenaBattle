#include "ABWeapon.h"

AABWeapon::AABWeapon()
{
	PrimaryActorTick.bCanEverTick = false;
	
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WEAPON"));
	RootComponent = Weapon;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_WEAPON(TEXT("/Game/InfinityBladeWeapons/Weapons/Blade/Swords/Blade_BlackKnight/SK_Blade_BlackKnight.SK_Blade_BlackKnight"));
	if (SK_WEAPON.Succeeded())
	{
		Weapon->SetSkeletalMesh(SK_WEAPON.Object);
	}
	Weapon->SetCollisionProfileName(TEXT("NoCollision"));

	AttackRange = 150.0f;
	AttackDamageMin = -2.5f;
	AttackDamageMax = 10.0f;
	AttackModifierMin = 0.85f;
	AttackModifierMax = 1.25f;
}

float AABWeapon::GetAttackRange() const
{
	return AttackRange;
}

float AABWeapon::GetAttackDamage() const
{
	return AttackDamage;
}

float AABWeapon::GetAttackModifier() const
{
	return AttackModifier;
}

void AABWeapon::BeginPlay()
{
	Super::BeginPlay();

	AttackDamage = FMath::RandRange(AttackDamageMin, AttackModifierMax);
	AttackModifier = FMath::RandRange(AttackModifierMin, AttackModifierMax);
	ABLOG(Warning, TEXT("Weapon Damage : %f, Modifer : %f"), AttackDamage, AttackModifier);
}

void AABWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

