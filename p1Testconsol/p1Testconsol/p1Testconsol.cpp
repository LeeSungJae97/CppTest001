// p1Testconsol.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


using namespace std;


////이런게 함수의 정의
//void MyNewPrint(int number)
//{
//    printf("나이 값은 %d 입니다.\n", number); 
//    //number + 1 이항 연산자  (age < 40)? 1: 2) 삼항 연산자 ++number 단항 연산자
//
//
//}



int main()
{   
    //int number = 10; //integer가 정수다. 그러니 정수를 저장하기 위한
    //                 //데이터 타입으로 줄임말 int를 썼다.
    // 
    //int number2 = 0.15;

    //printf("실수를 출력해 보겠음.%d.\n", number2);
    //
    ////int_=10;가능,_int 건들지 마라는 뜻
    ////중요! c++에서 main 함수는 무조건 있어야한다.
    ////프로그램은 main 함수에서부터 시작한다.
    //cout << "이성재 \n";
    //printf("010-7356-0125 \n");

    //MyNewPrint(27); //이런게 함수의 호출

    int number = -10;

    printf("number 변수를 찍어볼까? : %d \n\n", number);

    int num1 = 9, num2 = 2;
    int result1 = 0;
    //result1 = result1 + (num1 + num2);
    result1 += (num1 + num2);

    //num1++;
    //printf("num1: %d \n", num1++);

    //++num1;
    //printf("num1: %d \n", ++num1);

    num1 += 1;                     //위에꺼가 어려울 때 이렇게 가능
    printf("num1: %d \n", num1);

    num1 += 1;
    printf("num1: %d \n", ++num1);

    int someNumber = 0;
    someNumber = someNumber++;
    printf("some number 안에는 무슨 값이 들어 있을까? %d \n", someNumber);

    //num1--;
    //printf("num1: %d \n", num1);

    //--num1;
    //printf("num1: %d \n", num1);


    printf("%d + %d = %d \n", num1, num2, num1 + num2);
    printf("%d - %d = %d \n", num1, num2, num1 - num2);
    printf("%d * %d = %d \n", num1, num2, num1 * num2);
    printf("%d / %d = %d \n", num1, num2, num1 / num2);
    printf("%d %% %d = %d \n", num1, num2, num1 % num2);
}

