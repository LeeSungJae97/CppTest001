// diceex2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//컴퓨터가 주사위를 2번 굴린다 플레이어는 숫자를 미리 볼수있다. 총합이 홀수인지 짝수인지 출력한다.(easy)
//플레이어는 숫자를 미리 볼 수 없다. 플레이어가 홀,짝을 맞춰야한다(nomal)

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void oddGame(int number);

int main()
{
	int number;

	printf("홀수면 1 짝수면 0을 입력하시오!");
	scanf_s("%d", &number);
	oddGame(number);
}

void oddGame(int number)
{
	srand(time(NULL));

	int randomNumber1 = 0;
	int randomNumber2 = 0;
	int total;

	randomNumber1 = (rand() % 6) + 1;
	randomNumber2 = (rand() % 6) + 1;

	total = randomNumber1 + randomNumber2;

	total = total % 2;

	printf(", total);

	if (total == number)
	{
		printf("정답입니다.");

	}

	else

	{
		printf("틀렸습니다.");

	}

}
//void Description001();
//
//int main()
//{
//	Description001();
//
//}
//
//
//void Description001()
//{
//
//	srand(time(NULL));
//	int randomNumber1, randomNumber2 = 0;
//	randomNumber1 = (rand() % 6) +1;
//	randomNumber2 = (rand() % 6) +1;
//
//	printf("Random number1?? %d \n", randomNumber1);
//	printf("Random number2?? %d \n", randomNumber2);
//
//
//
//}