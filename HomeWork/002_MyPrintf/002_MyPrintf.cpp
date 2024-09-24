// 002_MyPrintf.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int NumberCount(int _Value)
{
	int Result = 0;
	while (_Value)
	{
		_Value /= 10;
		Result += 1;
	}
	return Result;
}

void NumberToString(char* Buffer, int BufferSize, int _Value)
{
	int Count = NumberCount(_Value);

	int Value = 3;
	char Ch = Value + '0';

	int CurValue = _Value / 10;


	return;
}

const int IntMaxCount = 10;
const int ParameterInter = 8;

// 함수의 인자는 무조건 8바이트씩 떨어져 있다.
int MyPrintf(const char* const _Ptr, ...)
{
	__int64 FAdd = reinterpret_cast<__int64>(&_Ptr);

	int ChCount = 0;

	while (_Ptr[ChCount])
	{
		char Ch = _Ptr[ChCount];

		if (Ch == '%')
		{
			Ch = _Ptr[ChCount + 1];

			switch (Ch)
			{
			case 'd':
			{
				int* Ptr = reinterpret_cast<int*>(FAdd += ParameterInter);
				int ConvertValue = *Ptr;
				char Arr[IntMaxCount] = {};
				NumberToString(Arr, IntMaxCount, ConvertValue);

				MyPrintf("100");
				ChCount += 2;
				break;
			}
			default:
				break;
			}
			// 함수내부에서 자기자신을 다시 호출하는 방식을 사용해볼겁니다.
			// 이걸 재귀함수라고 부릅니다.
		}

		putchar(_Ptr[ChCount]);
		ChCount += 1;
	}

	return ChCount;
}

void ReFunction()
{
	// 잘 종료를 해줘야 한다.
	if (true)
	{
		return;
	}

	ReFunction();
}

int main()
{
	// int Value = '1';

	// ReFunction();

	// 숫자를 출력하는 기능을 포맷팅이라는 것으로 만들어 놨습니다.

	// %d는 정수 출력할께요
	// printf_s("%d, %d", nullptr);
	// printf_s("Number : %d\n", 12321);

	// \n 엔터 줄바꿈 처리를 해라.
	MyPrintf("Number : %d\n", 12321);
	// MyPrintf("Number : %d\n", 333);
	// "Number : 100\n"

	// '\n';

	int Value = 123;
	int Index = 0;

	char Arr[IntMaxCount] = {};
	// 100이라는 숫자부터 시작해야한다는것은 어떻게 알수 있을까?
	int NumberCountValue = NumberCount(Value);

	int MulValue = 1;

	for (int i = 0; i < NumberCountValue - 1; i++)
	{
		MulValue *= 10;
	}

	while (true)
	{
		Arr[Index] = Value / MulValue + '0';
		MulValue /= 10;
		Index += 1;
		if (Index == NumberCountValue)
		{
			break;
		}
	}

	//Arr[0] = Value / MulValue;
	// MulValue -= 1000;

	//Arr[1] = Value / MulValue;
	// MulValue -= 100;

	//Arr[2] = Value / MulValue;
	// MulValue -= 10;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
