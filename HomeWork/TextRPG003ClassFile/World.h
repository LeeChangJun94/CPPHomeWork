#pragma once
#include "Town.h"
#include "FightZone.h"

// 게임의 시작을 알리고
// 겡임의 종료를 책임진다.
// world 게임 세계 그자체라고 생각하고 만들어서 world이다.
class UWorld
{
public:
	void InPlayer(class APlayer& _Player);

private:

	void ZoneInit();
	void PlayerNameSelect(class APlayer& _Player);
	void PlayerZonePlay(class APlayer& _Player);
	void PlayerInit(class APlayer& _Player);

	UTown TownZone0;
	UTown TownZone1;
	UFightZone FightZone;
};

