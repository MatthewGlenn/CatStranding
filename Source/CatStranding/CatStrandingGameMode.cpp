// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CatStrandingGameMode.h"
#include "CatStrandingCharacter.h"

ACatStrandingGameMode::ACatStrandingGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ACatStrandingCharacter::StaticClass();	
}
