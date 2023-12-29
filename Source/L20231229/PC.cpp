// Fill out your copyright notice in the Description page of Project Settings.


#include "PC.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

void APC::BeginPlay()
{
	Super::BeginPlay();
	UEnhancedInputLocalPlayerSubsystem* SubSystem = ULocalPlayer::GetSubsystem
		<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (SubSystem && DefaultIMC)
	{
		SubSystem->AddMappingContext(DefaultIMC, 0);
	}

}
