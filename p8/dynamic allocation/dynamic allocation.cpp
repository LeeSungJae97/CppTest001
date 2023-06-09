// dynamic allocation.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
void Desc003();

//const int INT_TEN2 = 10;
int main()
{
    Desc003();
}

void Desc003()
{
    /*const int INT_TEN = 10;*/
    int userInput = -1;
    printf("원하는 크기만큼 배열을 만들겠음. 크기를 입력하시오 :");
    scanf_s("%d", &userInput);

    // new 동적할당
    int numbers[10] = { 0, };
    int* numbers2 = new int[userInput];  //힙에 배열을 할당했다.

    for (int i = 0; i < userInput; i++)
    {
        numbers2[i] = i + 1;
    }
    for (int i = 0; i < userInput; i++)
    {
        printf("i값 : %d \n", numbers2[i]);

    }
    printf("\n\n");

    //프로그램 종료시에
    delete[] numbers2;
}