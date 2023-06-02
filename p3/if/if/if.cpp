// if.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//bool isSame = ('A' == 65);

	//char someAlphabat = 'D';
	//bool isBigAlphabet = ('A' <= someAlphabat && someAlphabat <= 'Z');
	//bool isSmallAlphabet = ('a' <= someAlphabat && someAlphabat <= 'Z');
	//bool isNumber = ('0' <= someAlphabat && someAlphabat <= '9');

	//if (isSmallAlphabet)
	//{
	//	printf("영문 대문자입니다. \n");
	//	   //if문은 조건식이 참이면 스코프 안의 내용을 진행하고, 거짓이면 건너뛴다.
	//
	//}
	//else if (isNumber)
	//{
	//	printf("영문 소문자 입니다. \n");
	//	// 위의 조건식에서 참이 아닌, 다른 모든 경우 스코프 안의 내용을 진행한다.
	//}
	//else
	//{
	//	printf("영문 대문자가 아닙니다. \n");
	//}


	//----------------------


	int loopCount = 1;
	while (10 >= loopCount)//조건식
	{
		printf("Hello world! 몇 번째 돌고 있는지? %d \n",loopCount);
		loopCount += 1;
	}// loop : 루프종료

}

