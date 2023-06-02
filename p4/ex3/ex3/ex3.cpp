// ex3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//지난 번에 만들었던 크리티컬 데미지 주는 함수 수정해서 60%확률로 크리티컬 데미지 주는 함수로 만들기
//-Loop 사용해서 종료 입력 전까지 반복
//플레이어가 어떤 상태인지 출력해서 보여줄것.(왜 크리티컬인지,아닌지 알 수 있어야 함)

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	oddGame();

}//main

void oddGame(int number)
{	
	int randomNumber = 0;
	const int MAX_DICE_VALUE = 6;
	srand(time(NULL));

	printf("주사위 프로그램 \n\n");
	printf("컴퓨터가 뽑은 3개의 주사위 값 → ");
	for (int i = 0; i < 3; i++)
	{
		randomNumber = (rand() % MAX_DICE_VALUE) + 1;
		printf("%d", randomNumber);
		Sleep(1000);
	}
	printf("\n\n");
	printf("프로그램 종료 \n\n");
}

