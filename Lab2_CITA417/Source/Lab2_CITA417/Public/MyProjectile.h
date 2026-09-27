// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyProjectile.generated.h"

UCLASS()
class LAB2_CITA417_API AMyProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

    // The visual mesh and physics body of the projectile
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UStaticMeshComponent* ProjectileMesh;

    // Fulfills Requirement 5: Customizable initial launch strength
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physics", meta = (AllowPrivateAccess = "true"))
    float LaunchStrength;

    // Fulfills Requirement 7: Lifetime variable for automatic destruction
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup", meta = (AllowPrivateAccess = "true"))
    float ProjectileLifetime;

    // Function to handle the automatic destruction timer
    void DestroyProjectile();

    FTimerHandle DestroyTimerHandle;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
