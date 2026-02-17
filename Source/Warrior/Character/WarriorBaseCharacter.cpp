#include "Character/WarriorBaseCharacter.h"


AWarriorBaseCharacter::AWarriorBaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	
	GetMesh()->SetReceivesDecals(false);
}
