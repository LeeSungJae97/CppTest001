// ifloopex1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include<stdio.h>

int main()
{

	int number;
	
		
	  while(true)
	  {
		  printf("숫자 입력 \n");
		  scanf_s("%d", &number);

		if (number % 2 == 0 )
		{
			printf("입력한 숫자는 짝수입니다.");
		}

		else
		{
			printf("입력한 숫자는 홀수입니다.");

		}
	
		number += 1;
		
		
	   }
	  
	  return 0;
	  
}

