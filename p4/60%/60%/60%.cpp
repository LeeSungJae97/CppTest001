// 60%.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//지난 번에 만들었던 크리티컬 데미지 주는 함수 수정해서 60%확률로 크리티컬 데미지 주는 함수로 만들기
//-Loop 사용해서 종료 입력 전까지 반복
//플레이어가 어떤 상태인지 출력해서 보여줄것.(왜 크리티컬인지,아닌지 알 수 있어야 함)

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void Number();

int main()
{
	
	int randomNumber1 = 0;
	srand(time(NULL));
	int number;
	
	while (1)
	{
		printf("적이 나타났습니다!\n\n");
		printf("숫자를 입력하세요!\n\n");
		scanf_s("%d", & number);
		printf("공격하겠습니당ㅎㅎㅎ1초만기달용\n\n");
		Sleep(1000);
		Number();
	}
}

void Number()
{
	
	int randomNumber1 ;
	

	

	randomNumber1 = (rand() % 100) + 1;

	if (randomNumber1 > 40)
	{
		printf("크리티컬 성공! 적에게 큰 타격을 입혔습니다!\n");
		printf("나온 주사위 값:  %d\n", randomNumber1 );
	}


	else {
		printf("캔슬..ㅠㅠ \n");
		printf("나온 주사위 값:  %d\n", randomNumber1);
	}
}