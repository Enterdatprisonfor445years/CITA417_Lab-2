#include "InteractionComp.h"
#include "CollisionQueryParams.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"

UInteractionComp::UInteractionComp()
{
	PrimaryComponentTick.bCanEverTick = false; // We don't need tick for this lab
}

void UInteractionComp::BeginPlay()
{
	Super::BeginPlay();
}

void UInteractionComp::Interact()
{
	APlayerController* PlayerController = Cast<APlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (!PlayerController) return;

	// 2. Aim direction: Get active player camera location and rotation
	FVector ViewLocation;
	FRotator ViewRotation;
	PlayerController->GetPlayerViewPoint(ViewLocation, ViewRotation);

	FVector Start = ViewLocation;
	FVector ForwardVector = ViewRotation.Vector();
	FVector End = Start + (ForwardVector * TraceDistance);

	FHitResult HitResult;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(GetOwner()); // Ignore the player character holding the component

	// 3. Object detection: Perform the line trace
	bool bHit = GetWorld()->LineTraceSingleByChannel(
		HitResult,
		Start,
		End,
		ECC_Visibility,
		Params
	);

	// 7. Debug evidence: Visible trace line during development
#if !UE_BUILD_SHIPPING
	FColor LineColor = bHit ? FColor::Green : FColor::Red;
	DrawDebugLine(GetWorld(), Start, End, LineColor, false, 2.0f, 0, 2.0f);
#endif

	if (bHit)
	{
		// 4. Physics check: Verify if hit component simulates physics
		UPrimitiveComponent* HitComponent = HitResult.GetComponent();
		if (HitComponent && HitComponent->IsSimulatingPhysics())
		{
			// 5. Impulse: Push the physics body forward
			FVector ImpulseDirection = ForwardVector * ImpulseStrength;
			HitComponent->AddImpulse(ImpulseDirection, NAME_None, false);
		}
	}
}
