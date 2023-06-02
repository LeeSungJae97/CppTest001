// P3sanf.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    /*int result;
    int num1, num2, num3;

    printf("정수 one : ");
    scanf_s("%d", & num1);
    printf("정수 two : ");
    scanf_s("%d", & num2);
    printf("정수 two : ");
    scanf_s("%d", & num3);

    result = num1 + num2 * num3;
    printf("%d + %d * %d = %d \n", num1, num2, num3, result);
    return 0;*/

    int result;
    int num1, num2, num3;

    printf("one : ");   //num1, &num1 다르다
    scanf_s("%d", & num1);
    printf("two : ");
    scanf_s("%d", & num2);
    printf("three : ");
    scanf_s("%d", & num3);

    result = (num1 - num2) * (num2 + num3) * (num3 % num1);
    printf("(%d - %d) * (%d + %d) * (%d %% %d) = %d \n", num1, num2, num2, num3, num3, num1, result);
    return 0; 

}

