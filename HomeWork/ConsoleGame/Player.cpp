#include "Player.h"
#include <conio.h>
#include "Enums.h"

void Player::BeginPlay()
{
	PlayerImage.Create({2, 2}, '@');
}

void Player::Tick()
{
	int Value = _kbhit();
	Enums::GAMEDIR Dir = Enums::GAMEDIR::NONE;
	if (Value != 0)
	{
		int Select = _getch();

		switch (Select)
		{
		case 'A':
		case 'a':
			Dir = Enums::GAMEDIR::LEFT;
			break;
		case 'D':
		case 'd':
			Dir = Enums::GAMEDIR::RIGHT;
			break;
		case 'W':
		case 'w':
			Dir = Enums::GAMEDIR::UP;
			break;
		case 'S':
		case 's':
			Dir = Enums::GAMEDIR::DOWN;
			break;
		default:
			break;
		}

	}

	switch (Dir)
	{
	case Enums::GAMEDIR::LEFT:
		if (0 < Pos.X)
		{
			Pos += FIntPoint::LEFT;
		}
		break;
	case Enums::GAMEDIR::RIGHT:
		if (BackBufferX - PlayerImage.GetImageSizeX() > Pos.X)
		{
			Pos += FIntPoint::RIGHT;
		}
		break;
	case Enums::GAMEDIR::UP:
		if (0 < Pos.Y)
		{
			Pos += FIntPoint::UP;
		}
		break;
	case Enums::GAMEDIR::DOWN:
		if (BackBufferY - PlayerImage.GetImageSizeY() > Pos.Y)
		{
			Pos += FIntPoint::DOWN;
		}
		break;
	default:
		break;
	}

	
}

void Player::Render(ConsoleImage* _BackBuffer)
{
	// delete _BackBuffer;
	_BackBuffer->Copy(Pos, PlayerImage);
	BackBufferX = _BackBuffer->GetImageSizeX();
	BackBufferY = _BackBuffer->GetImageSizeY();
}

void Player::SetActorLocation(FIntPoint _Pos)
{
	Pos = _Pos;
}