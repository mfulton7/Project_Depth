// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Project_DepthGameMode.h"
#include "Project_DepthHUD.h"
#include "Project_DepthCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_DepthGameMode::AProject_DepthGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProject_DepthHUD::StaticClass();
}
