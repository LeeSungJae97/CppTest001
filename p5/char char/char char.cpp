// char char.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>



void Description003()
{
	
	//배열이란 무엇인지 실습 배열은 여러가지 변수를 쓸떄 사용 ex) 총게임에서 총알 하나당 변수로 5개를 만든다.
	//초기화는 알수있는 값으로 설정하기 위해서 초기화 한다.
	int numbers[3000];     //5개의 변수를 선언한 것이다., 배열 초기화 첫번쨰
	//numbers[0] = 100;
	/*numbers[1] = 200;
	numbers[2] = 300;
	numbers[3] = 400;
	numbers[4] = 500;*/


	const int MAX_ARRAY = 5;
	for (int i = 0; i < MAX_ARRAY; i++)
	{
		numbers[i] = (i + 1) * 100;
		printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", i, numbers[i]);

	}

	//배열 초기화 두번째
	int numbers2[5] = { 10,20,30,40,50 };

	//배열 초기화 세번쨰
	int numbers3[5] = { 0, };

	//printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 0, numbers[0]);
	//printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 1, numbers[1]);
	//printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 2, numbers[2]);
	//printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 3, numbers[3]);
	//printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 4, numbers[4]);

}


void Description002()
{
	// 캐스팅 테스트 형변환
	char char_ = 'A';
	int int_ = char_;
	float floatValue = 100.123;
	int_ = (int)floatValue;
	printf("int_변수 안에 무슨 값이 들어있나? %f \n",(float) int_);

}


int main()
{
	Description002();
	Description003();
}
