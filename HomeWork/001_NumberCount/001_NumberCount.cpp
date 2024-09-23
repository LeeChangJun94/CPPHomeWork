// 001_NumberCount.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 음수 안함
// 0 이외의 양수의 자릿수를 세자.
int NumberCount(long long _Value)
{
    // /(나누기를 최대한) 연산을 사용하세요.
    int Result = 0;
    long long Value = _Value;

    while (Value)
    {
        Value = _Value /= 10;

        Result += 1;
    }

    return Result;
}

// 해도 되고 안해도 됩니다.
// 내 기준으로 지금
// _Value 를 넣어주면 Buffer에 
// 숫자를 문자열로 만드는 함수.
void NumberToString(char* Buffer, int BufferSize, int _Value)
{
    int ValueSize = NumberCount(_Value);
    int Value = _Value;

    while (Value)
    {
        Buffer[ValueSize - 1] = Value % 10 + '0';
        Value /= 10;
        ValueSize -= 1;
    }

    return;
}

int main()
{
    // 5
    int Result = NumberCount(5258546979132134111);
 
    char Buffer[100] = { 0 };

    NumberToString(Buffer, 100, 3712);

    std::cout << Buffer;
    // Buffer == "3712"

}
