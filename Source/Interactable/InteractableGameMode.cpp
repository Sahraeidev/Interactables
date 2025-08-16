// Copyright Epic Games, Inc. All Rights Reserved.

#include "InteractableGameMode.h"
#include "InteractableHUD.h"
#include "InteractableCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInteractableGameMode::AInteractableGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AInteractableHUD::StaticClass();
}
