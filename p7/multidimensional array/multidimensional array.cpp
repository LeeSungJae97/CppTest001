// multidimensional array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
void Desc002();
int main()
{
    Desc002();
}

void Desc002()
{
    //다차원 배열
    char char_[25] = { 0, };
    char char2_[5][5] = { 0, };
 /*   {
        {1,2,3,4,5},
        {6,7,8,9,10},     // {0, } 없애야 숫자 나옴
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };*/

    for (int i = 0; i < 25; i++)
    {
        char_[i] = '*';
    }

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            if (x == 2 && y == 2)
            {
                char2_[2][2] = '0';
                continue;
            }
            char2_[y][x] = '*';
        }
    }

    /*char2_[2][2] = '0';*/
    //출력 부분
  /*  for (int i = 0; i < 25; i++)
    {
        printf("%c ", char_[i]);

        if (i % 5 == 4)
        {
            printf("\n");

        }
    }*/

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf("%c ", char2_[y][x]);
        }
        printf("\n");

    }

    printf("\n");
}