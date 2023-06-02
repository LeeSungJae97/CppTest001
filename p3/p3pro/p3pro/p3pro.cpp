// p3pro.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{

    // { 변수 선언부
    int result;
    int num1, num2;
    // } 변수 선언부

    //// { 사용자 입력 받는 로직
    //printf("정수 one : ");
    //scanf_s("%d", & num1);
    //printf("정수 two : ");
    //scanf_s("%d", &num2);
    //// } 사용자 입력 받는 로직

     // { 사용자 입력 받는 로직
    printf("정수 2개를 입력해주세요 : ");
    scanf_s("%d %d", & num1, &num2); // &d , &d 써도 됨
    // } 사용자 입력 받는 로직


    // { 실제 연산하는 로직 / 플러스 연산
    result = num1 + num2;
    printf("%d + %d = %d \n", num1, num2, result);
    // } 실제 연산하는 로직 / 플러스 연산

    // main 함수 여기서 종료
    return 0; //함수를 여기서 끝내겠다는 의미

} //main()

