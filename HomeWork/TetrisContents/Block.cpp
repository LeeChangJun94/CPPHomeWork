#include "Block.h"
#include <EngineCore/Renderer.h>
#include <EngineCore/ConsoleEngine.h>
#include <EngineCore/ConsoleWindow.h>
#include "BackImage.h"
#include <conio.h>


void Block::BeginPlay()
{
	Super::BeginPlay();

	Renderer* Render = CreateDefaultSubObject();
	Render->RenderImage.Create({ 1, 1 }, '@');
	SetActorLocation({ 1, 0 });

	//WindowSizeX = ConsoleEngine::GetEngine().GetWindow()->GetWindowSizeX();
	//WindowSizeY = ConsoleEngine::GetEngine().GetWindow()->GetWindowSizeY();
}

void Block::Tick()
{

	Super::Tick();

	int Value = _kbhit();
	if (Value != 0)
	{
		int Select = _getch();

		switch (Select)
		{
		case 'A':
		case 'a':
			if (0 < GetActorLocation().X)
			{
				AddActorLocation(FIntPoint::LEFT);
			}
			break;
		case 'D':
		case 'd':
			if (BackImage::BackImageWindow->GetImageRenderer()->RenderImage.GetImageSize().X - 1> GetActorLocation().X)
			{
				AddActorLocation(FIntPoint::RIGHT);
			}

			break;
		default:
			break;
		}
	}

	if (BackImage::BackImageWindow->GetImageRenderer()->RenderImage.GetImageSize().Y - 1 > GetActorLocation().Y)
	{
		if (BackImage::BackImageWindow->GetImageRenderer()->RenderImage.GetPixel(GetActorLocation().X, GetActorLocation().Y + 1) == '@')
		{
			BackImage::BackImageWindow->GetImageRenderer()->RenderImage.SetPixel(GetActorLocation(), '@');
		
			SetActorLocation({ 1, 0 });
		}
		AddActorLocation(FIntPoint::DOWN);
	}
	else if (BackImage::BackImageWindow->GetImageRenderer()->RenderImage.GetImageSize().Y - 1 == GetActorLocation().Y)
	{
		BackImage::BackImageWindow->GetImageRenderer()->RenderImage.SetPixel(GetActorLocation(), '@');

		SetActorLocation({ 1, 0 });
	}
	


}


