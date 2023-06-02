// rocksisspapermaking.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>



int main()
{
    printf("가위바위보 게임 \n 1,2,3 중 하나를 선택하시오  ");//무조건 비기는 코드로 만들었습니다.
    int inputNumber = 2;
    scanf_s("%d", & inputNumber);

    printf("값은? %d \n", inputNumber);
    inputNumber = 2;
    int computer = 2;

    int siss = 1;
    int rock = 2;
    int paper = 3;

    inputNumber == 3 ? printf("승리!") : inputNumber == 2 ? printf("비겼습니다.") : printf("패배!");
    
}

