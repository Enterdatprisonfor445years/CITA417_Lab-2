// Fill out your copyright notice in the Description page of Project Settings.


#include "MyProjectile.h"
#include "TimerManager.h"

// Sets default values
AMyProjectile::AMyProjectile()
{
    PrimaryActorTick.bCanEverTick = false;

    // Create the static mesh component
    ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
    RootComponent = ProjectileMesh;

    // Fulfills Requirement 4: Enable physics simulation and collision
    ProjectileMesh->SetSimulatePhysics(true);
    ProjectileMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

    // Default configuration values
    LaunchStrength = 2000.0f;
    ProjectileLifetime = 5.0f; // Fulfills Requirement 7

}

// Called when the game starts or when spawned
void AMyProjectile::BeginPlay()
{
	Super::BeginPlay();

    // Fulfills Requirement 7: Start lifetime countdown
    GetWorldTimerManager().SetTimer(DestroyTimerHandle, this, &AMyProjectile::DestroyProjectile, ProjectileLifetime, false);

    // Fulfills Requirement 6: Apply the physical forward impulse immediately upon spawning
    FVector LaunchDirection = GetActorForwardVector();
    ProjectileMesh->AddImpulse(LaunchDirection * LaunchStrength, NAME_None, true);
	
}

void AMyProjectile::DestroyProjectile()
{
    Destroy();
}

// Called every frame
void AMyProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

