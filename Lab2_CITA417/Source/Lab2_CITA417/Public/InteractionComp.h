#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractionComp.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class LAB2_CITA417_API UInteractionComp : public UActorComponent
{
	GENERATED_BODY()

public:
	UInteractionComp();

protected:
	// This matches the exact method signature expected by UActorComponent
	virtual void BeginPlay() override;

public:
	// Main interaction function called by input
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void Interact();

private:
	// 3. Object detection: Configurable distance
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction", meta = (AllowPrivateAccess = "true"))
	float TraceDistance = 500.0f;

	// 5. Impulse: Configurable strength
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction", meta = (AllowPrivateAccess = "true"))
	float ImpulseStrength = 100000.0f;
};
