// CARDEX1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>

void DescShuffle();

void randomIdx2();
int main()
{
    DescShuffle();

}

void DescShuffle()
{
    //{배열의 선언과 초기화
   
    char cardPatterns_Spade[8] = "Spade";
    char cardPatterns_Diamond[8] = "Diamond";
    char cardPatterns_Heart[8] = "Heart";
    char cardPatterns_Clover[8] = "Clover";
    char Card[13] = { 'A', '2','3','4','5','6','7','8','9','10','J','Q','K'};

    // }배열의 선언과 초기화

    //{ 배열의 출력
    printf("Shuffle 하기 전 \n");
    for (int i = 0; i < 13; i++)
    {
        printf("%c ", Card[i]);
    }
    printf("\n");
    //}배열의 출력

    ////{셔플 로직
    const int shuffleCount = 13;

    srand(time(NULL));
    printf("\n");

    

    printf("Shuffle 한 후 \n");
   // for (int i = 0; i < shuffleCount; i++)
    //{
    int x = 0;
    x = rand() % 13;
    printf("%c ", Card[x]); 

    int randomShape = 0;
    randomShape = rand() % 4 + 1;
    
    

    if (randomShape == 1)
    {
        printf("%s ", cardPatterns_Spade);
    }
    else if (randomShape == 2)
    {
        printf("%s ", cardPatterns_Diamond);
    }
    else if (randomShape == 3)
    {
        printf("%s ", cardPatterns_Heart);
    }
    else if (randomShape == 4)
    {
        printf("%s ", cardPatterns_Clover);
    }
    //}

    ////}셔플 로직



    // //{ 배열의 출력
    //printf("Shuffle 한 후 \n\n");
    //for (int i = 1; i < 2; i++)
    //{

    //    printf("%d ", Card[13]);
    //    printf("%d", randomIdx2);
    //    Sleep(200);


    //}

    printf("\n\n");
    //}배열의 출력

    _getch();
}

