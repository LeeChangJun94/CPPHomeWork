#pragma once
#include <EngineCore/Actor.h>

class Block : public AActor
{
public:
	void BeginPlay() override;
	void Tick() override;

	int WindowSizeX = 0;
	int WindowSizeY = 0;

};

