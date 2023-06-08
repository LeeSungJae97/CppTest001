// multidimensional array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>
void Desc002();


int main()
{
    Desc002();

}

void Desc002()
{
    int movement = 0;
    char playerCharacter = '0'; //char2_[y][x] = playerCharacter; char2_[y][x]가 char라 char를 줬다,
   
    //다차원 배열
    char char_[25] = { 0, };
    char char2_[5][5] = { 0, };

    int horizonCount = 2; // [2][2] 자리에 0을 넣기 위해 2를 줬다.
    int verticalCount = 2;

    while (true)
    {
        for (int i = 0; i < 25; i++)
        {
            char_[i] = '*';
        }

        for (int y = 0; y < 5; y++)
        {
            for (int x = 0; x < 5; x++)
            {
                if (x == horizonCount && y == verticalCount)  // 계속 돌다가 22 가 되면 딱한번 가운데에 0이 찍힌다. 
                {
                    char2_[y][x] = playerCharacter;

                    continue;
                }
                char2_[y][x] = '*';
            }
        }
    


        for (int y = 0; y < 5; y++)   // 출력
        {
            for (int x = 0; x < 5; x++)
            {
                printf("%c ", char2_[y][x]);
            }
            printf("\n");

        }
     
        movement = _getch();

        if (movement == 'a' || movement == 'A')
        {
            horizonCount = horizonCount - 1;  // horizonCount = horizonCount - 1; 안사라진다.  horizonCount - 1만 하면 사라진다. 그래서 안된다/
        }
        else if (movement == 's' || movement == 'S')
        {
             verticalCount = verticalCount + 1;
        }
        else if (movement == 'w' || movement == 'W')
        {
            verticalCount = verticalCount - 1;
        }
        else if (movement == 'd' || movement == 'D')
        {
            horizonCount = horizonCount + 1;
        }


        system("cls"); // 콘솔 화면 초기화 
    }
}

