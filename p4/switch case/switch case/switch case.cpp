// switch case.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
//헤더파일 선언부
#include <iostream>
#include <conio.h> 
//#include <stdlib.h> conio.h 는 콘솔 입출력 함수를 제공하는 헤더입니다. 
//여러가지로 유용하게 쓸수 있는 함수가 많습니다.
//특히 전 kbhit 이랑 getch를 많이 사용합니다!!


int main()
{
    //switch / case 문

    char userInput = '0';
    printf("User input : ");
    userInput = _getch(); 
    printf("\n\n");
    //scanf_s("%d" , & userInput);
    
    switch (userInput)
    {
    case 'a':
        printf("이것은 가위 \n");
        break;
    case 'b':
        printf("이것은 바위 \n");
        break;
    case 'c':
        printf("이것은 보 \n");
        break;
    default:
        printf("처리되지 않은 예외 입력입니다. \n");
        break;
    }
    printf("프로그램을 종료합니다. \n");
}
