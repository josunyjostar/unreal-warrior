// PJY All Right Reserved 


#include "Character/WarriorBaseCharacter.h"

#include "WarriorDebugHelper.h"


AWarriorBaseCharacter::AWarriorBaseCharacter()
{
	PrimaryActorTick.bStartWithTickEnabled = false;
	GetMesh()->SetReceivesDecals(false);
	
	
	Debug::Print(TEXT("Working"));
}
