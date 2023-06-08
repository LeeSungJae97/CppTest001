#include <iostream>


void arrayment();
void swap(int* number1, int* number2);
int main()
{

	arrayment();
}


void arrayment()
{

    
	int arry[5] = { 21,59,36,99,17 };

	for (int x = 0; x < 5; x++)
	{
		for (int y = x;  y < 5;  y++) //2번째 for문 int y=x 는 몇번을 돌든 처음 포문 할 때만 취급한다.
			                          //(두번째 포문 5번 할떄까지 int y=x는 취급안한다.)
									  // 대신 5번 돌고 처음 for (int x = 0; x < 5; x++)로 가서 두번쨰 
		{							  //for (int y = x;  y < 5;  y++)로 오면 그때 int y = x를 취급해서 1이 올른다.
			if (arry[x] > arry[y])
			{
				printf("바꾼값 %d\n", arry[x]);

				swap(&arry[x], &arry[y]);

			}
		}
	}

	

	for (int x = 0; x < 5; x++)   // 출력 값 나오는 곳
	{
		printf("%d ", arry[x]);
	}


}

void swap(int* number1, int* number2)//&number1(변수명)은 주소 값을 호출할 때 사용한다.
//int* ptrNumber(변수명)은 포인터를 선언할 때 사용한다.
// 주소 값은 포인터에만 저장할 수 있다.
// ex) int* ptrNumber = &number1;
// *number1(변수명)을 사용하여 해당 주소에 저장된 값을 가져올 수 있다.
// 위처럼 사용할 경우 다른 함수에 적용된 지역 변수를 호출 혹은 수정할 수 있다.
{
	int temp = 0;
	temp = *(number1);     // temp 는 0 넘버는 [0]이 50 이라 치면 50이 탬프에 들어간다. 탬프는 50이다. 
	*(number1) = *(number2);  // [1]이 49라 하면 넘버1값을 49로 바꾼다. 
	*(number2) = temp;        // 탬프는 50이니까 넘버 2로 들어가 50이 된다. 
}