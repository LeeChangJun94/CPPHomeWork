#include "BackImage.h"
#include <EngineCore/Renderer.h>
#include <EngineCore/ConsoleEngine.h>
#include <EngineCore/ConsoleWindow.h>
#include <conio.h>

BackImage* BackImage::BackImageWindow = nullptr;

void BackImage::BeginPlay()
{
	BackImageWindow = this;

	Super::BeginPlay();

	Renderer* Render = CreateDefaultSubObject();

	Render->RenderImage.Create(
		{ ConsoleEngine::GetEngine().GetWindow()->GetWindowSizeX(), ConsoleEngine::GetEngine().GetWindow()->GetWindowSizeY() },
		'.');
}


void BackImage::Tick()
{
	Super::Tick();

	for (int i = ConsoleEngine::GetEngine().GetWindow()->GetWindowSizeY()-1; i >=0 ; i--)
	{
		//std::vector<char*> charVector;
		//charVector.reserve(6);
		std::vector<char>& line = GetImageRenderer()->RenderImage.GetLineRef(i);
		int cnt = std::count(line.begin(), line.end(),'@');
		if (cnt == ConsoleEngine::GetEngine().GetWindow()->GetWindowSizeX())
		{
			//¶¯°Ü¿Í

		}
		//for (int j = 0; j < ConsoleEngine::GetEngine().GetWindow()->GetWindowSizeX(); j++)
		//{
		//	
		//	if (GetImageRenderer()->RenderImage.GetPixel(j, i) != '@')
		//	{

		//		break;
		//	}
		//	else
		//	{
		//		char* Value = GetImageRenderer()->RenderImage.GetPixelRef(j, i);
		//		charVector.push_back(Value);
		//	}

		//	int sizeX = charVector.size();

		//	if (j == ConsoleEngine::GetEngine().GetWindow()->GetWindowSizeX() - 1
		//		&& sizeX == ConsoleEngine::GetEngine().GetWindow()->GetWindowSizeX())
		//	{
		//		for (int k = 0; k < ConsoleEngine::GetEngine().GetWindow()->GetWindowSizeX(); k++)
		//		{
		//			*charVector[k] = '.';
		//		}
		//	}

		//}
	}

}