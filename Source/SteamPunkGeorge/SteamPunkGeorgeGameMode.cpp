// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamPunkGeorgeGameMode.h"
#include "SteamPunkGeorgeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteamPunkGeorgeGameMode::ASteamPunkGeorgeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
