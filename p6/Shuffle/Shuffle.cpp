// Shuffle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>
void ShuffleOnce(int* firstNumber, int* secondNumber);
void DescShuffle();

int main()
{
    DescShuffle();
  
}

void DescShuffle()
{
    //{배열의 선언과 초기화
    int numbers[46] = { 0, };
    for (int i = 1; i < 46; i++)
    {
        numbers[i] = i;
    }
    // }배열의 선언과 초기화

    //{ 배열의 출력
    printf("Shuffle 하기 전 \n\n");
    for (int i = 1; i < 46; i++)
    {
        printf("%d " , numbers[i]);
    }
    printf("\n");
    //}배열의 출력

    //{셔플 로직
    const int shuffleCount = 100;
    int randomIdx1, randomIdx2 = 0;
    srand(time(NULL));

    for (int i = 0; i < shuffleCount; i++)
    {
        randomIdx1 = rand() % 46 + 1;
        randomIdx2 = rand() % 46 + 1;
        ShuffleOnce(&numbers[randomIdx1], &numbers[randomIdx2]);
    }

    //}셔플 로직

    

     //{ 배열의 출력
    printf("Shuffle 한 후 \n\n");
    for (int i = 1 ; i < 7 ; i++)
    {

            printf("%d ", numbers[i]);
            Sleep(200);
        
        
    }
   
    printf("\n\n");
    //}배열의 출력

    _getch();
}

void ShuffleOnce(int* firstNumber, int* secondNumber)
{
    int temp = 0;
    temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}