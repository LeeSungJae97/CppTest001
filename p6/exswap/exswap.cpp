// exswap.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Description4();

int main()
{
    Description4();
}

void Description4()
{
    //포인터 직접 쳐보기
    int number = 100;
    int* ptrNumber = &number;

    printf("number 변수의 주소는 : %p, 할당된 값은 : %d \n", &number, number);
    printf("ptrNumber 변수의 주소는 : %p, 할당된 값은 : %p, 역참조한 값: %d \n", &ptrNumber, ptrNumber,*ptrNumber);

}