// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);

	ACharacter* AC = Cast<ACharacter>(TryGetPawnOwner());
	if (IsValid(AC))
	{
		Speed = AC->GetCharacterMovement()->Velocity.Size2D();
	}

}
