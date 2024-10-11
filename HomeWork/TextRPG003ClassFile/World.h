#pragma once
#include "Town.h"
#include "FightZone.h"

// ������ ������ �˸���
// ������ ���Ḧ å������.
// world ���� ���� ����ü��� �����ϰ� ���� world�̴�.
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

