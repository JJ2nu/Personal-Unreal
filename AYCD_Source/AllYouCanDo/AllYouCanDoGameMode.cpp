// Copyright Epic Games, Inc. All Rights Reserved.

#include "AllYouCanDoGameMode.h"
#include "AllYouCanDoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAllYouCanDoGameMode::AAllYouCanDoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
