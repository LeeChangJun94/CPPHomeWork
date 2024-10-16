#pragma once
#include <EngineCore/Actor.h>

class BackImage : public AActor
{
public:
	void BeginPlay() override;
	void Tick() override;

	static BackImage* BackImageWindow;

	int WindowSizeX = 0;
	int WindowSizeY = 0;

};

