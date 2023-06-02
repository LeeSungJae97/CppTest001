// consolfor.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
void Description005();

int main()
{
	Description005();
}

void Description005()
{
	//여기서 키값을 바꿔볼 예정
	srand(time(NULL)); // 이것이 rand() 함수의 키 값을 바꿔주는 함수

	//Random 이해하기
	int randomNumber1, randomNumber2, randomNumber3 = 0;
	randomNumber1 = rand();
	randomNumber2 = rand();
	randomNumber3 = rand();
	//randomNumber1 = rand() % 6) +1;  // rand() 함수를 사용해서 랜덤값을 받는다
	//randomNumber2 = rand() % 6) +1;
	//randomNumber3 = rand() % 6) +1;

	printf("Random number?? %d \n", randomNumber1);
	printf("Random number?? %d \n", randomNumber2);
	printf("Random number?? %d \n", randomNumber3);
}



