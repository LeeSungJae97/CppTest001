// for.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Description004();

int main()
{
	int mainNumber = 10;
	Description004();

	//printf("mainNumber 값은? %d \n", mainNumber);
} //main

void Description004()
{
	printf("For 문은 반복문이다. 이렇게 돌아간다. \n");

	for (int loopCount = 3; loopCount <= 10; loopCount += 1)
	{
		printf("어떻게 돌아가고 있는 것이지??? \n");

	}
}
