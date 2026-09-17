#include "Interaction_Component.h"
#include "CollisionQueryParams.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"

UInteraction_Component::UInteraction_Component()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UInteraction_Component::BeginPlay()
{
	Super::BeginPlay();
}

void UInteraction_Component::Interact()
{
	APlayerController* PlayerController = Cast<APlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (!PlayerController) return;

	FVector ViewLocation;
	FRotator ViewRotation;
	PlayerController->GetPlayerViewPoint(ViewLocation, ViewRotation);

	FVector Start = ViewLocation;
	FVector ForwardVector = ViewRotation.Vector();
	FVector End = Start + (ForwardVector * TraceDistance);

	FHitResult HitResult;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(GetOwner());

	bool bHit = GetWorld()->LineTraceSingleByChannel(
		HitResult,
		Start,
		End,
		ECC_Visibility,
		Params
	);

#if !UE_BUILD_SHIPPING
	FColor LineColor = bHit ? FColor::Green : FColor::Red;
	DrawDebugLine(GetWorld(), Start, End, LineColor, false, 2.0f, 0, 2.0f);
#endif

	if (bHit)
	{
		UPrimitiveComponent* HitComponent = HitResult.GetComponent();
		if (HitComponent && HitComponent->IsSimulatingPhysics())
		{
			FVector ImpulseDirection = ForwardVector * ImpulseStrength;
			HitComponent->AddImpulse(ImpulseDirection, NAME_None, false);
		}
	}
}
