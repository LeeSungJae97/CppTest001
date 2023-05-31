// p22.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>

//void printfunc(int age); //main 함수보다 먼저 내가 만든 함수가 이런 모영이다
                         //라고 알려주는 역할 
                         //print 네번째 자료

int main()
{
    //int num1 = 10;    //첫번째 자료
    //int num2 = 12;
    //int result1, result2, result3; //result를 3개 선언했음.

    //result1 = num1 == num2;
    //result2 = num1 <= num2;
    //result3 = num1 > num2;

    //printf("Result1 결과는 %d \n", result1);
    //printf("Result2 결과는 %d \n", result2);
    //printf("Result3 결과는 %d \n", result3);






    //int num1 = 10;  //두번째 자료
    //int num2 = 12;
    //int result1, result2, result3;

    //result1 = ((num1 == 10) && (num2 == 12));
    //result2 = (num1 < 12 || num2 > 12);
    //result3 = (!num1); // 0이 아닌 모든것은 거짓

    //printf("result1: %d \n", result1);
    //printf("result2: %d \n", result2);
    //printf("result3: %d \n", result3);


    /*int age = 30;     //세번째 자료
    bool boolResult = (age < 20) ? true : false;
    printf("Bool result는 어떤 값? %d", boolResult);*/

    //printfunc(20);//print네번째 자료



    printf("숫자 값을 입력해주세요 → ");
    int inputNumber = 0;
    scanf_s("%d" , & inputNumber);

    printf("Input number 의 값은? %d \n", inputNumber);

}


//void printfunc(int age)//print네번째 자료
//{
//    printf("이성재, 나이: %d, 01073560125\n\n", age);
//}