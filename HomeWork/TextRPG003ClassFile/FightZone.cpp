#include "FightZone.h"
#include "Monster.h"
#include "Player.h"
#include <conio.h>


UZone* UFightZone::InPlayer(class APlayer& _Player)
{
	InMsgPrint();
	_getch();

	UMonster NewMonster;

	while (true)
	{
		system("cls");
		_Player.StatusRender();
		NewMonster.StatusRender();
		_getch();

		_Player.DamageLogic(NewMonster);
	}
}