// 003_PlusString.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void PlusString(char* _Buffer, int _BufferSize, const char* const _Value0, const char* const _Value1)
{
    int Index1 = 0;
    int Index2 = 0;
    
    while (true)
    {
        while (0 != _Value0[Index1])
        {
            _Buffer[Index1] = _Value0[Index1];

            Index1 += 1;
        }
        
        while (0 != _Value1[Index2])
        {
            _Buffer[Index1] = _Value1[Index2];

            Index1 += 1;
            Index2 += 1;
        }
        break;
    }
}

int main()
{
    char Arr[100] = {};

    PlusString(Arr, 100, "AAAADEFSF", "BBBASDAAB");

    std::cout << Arr << "\n";
}

