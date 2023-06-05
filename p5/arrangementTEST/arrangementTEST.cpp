// arrangementTEST.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

void Description005()
{
	//길을 걷는 사람1
	/*char board[5] = { 0, };*/

	//{ board를 초기화 하는 로직

	char board[5];

	int whileValue = 0;

	while (true)
	{
		for (int i = 0; i < 5; i++)
		{
			board[i] = '*';

			if (i == whileValue)
			{
				board[i] = '0';
			}
		}
		//{ board를 초기화 하는 로직
		for (int i = 0; i < 5; i++)
		{
			printf("%c", board[i]);
		}

		printf("\n\n");
		whileValue++;
		_getch();
		//} board를 초기화하는 로직
	}
}

//void Description004();
//{  
//	int numbers[9]; 
//
//
//	//구구단 출력하는 프로그램 만들기
//	int lineCount[9] = { 0, };
//
//	int lineCount[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//
//	printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 1, numbers[1]);
//	printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 2, numbers[2]);
//	printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 3, numbers[3]);
//	printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 4, numbers[4]);
//	printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 5, numbers[5]);
//	printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 6, numbers[6]);
//	printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 7, numbers[7]);
//	printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 8, numbers[8]);
//	printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 9, numbers[9]);
//
//}

int main()
{
	Description005();
}

