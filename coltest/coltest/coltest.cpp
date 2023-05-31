// coltest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int pl(int num1, int num2) {
    return num1 + num2;
}

int ma(int num1, int num2) {
    return num1 - num2;
}

int mu(int num1, int num2) {
    return num1 * num2;
}

int di(int num1, int num2) {
    return num1 / num2;
}

int pe(int num1, int num2) {
    return num1 % num2;
}


int main()
{
    int number1 = 20;
    int number2 = 10;

    printf("%d + %d = %d \n", number1, number2, pl(number1, number2));
    printf("%d - %d = %d \n", number1, number2, ma(number1, number2));
    printf("%d * %d = %d \n", number1, number2, mu(number1, number2));
    printf("%d / %d = %d \n", number1, number2, di(number1, number2));
    printf("%d %% %d = %d \n", number1, number2, pe(number1, number2));
}

