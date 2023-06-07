// Testconsol06.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Description001();
//void Description002();

int main()
{
	/*Description002();*/
	Description001();
}


//void Description002()
//{
//	char str[300] = { 0, };
//	printf("문자열을 입력하시오(200자 이내로) :");
//	std::cin >> str;
//
//	printf("제대로 입력을 받았는지? -> %s", str);
//}

void Description001()
{
	char string_[15] = "Good morning!\n";
	char stringCopy[16] = { 0, };
	char string2[] = "Good morning! \n";
	int numbers[10] = { 0, };


	printf("문자열 배열의 크기 %d\n", sizeof(string_));
	printf("문자열 배열 2번째 것의 크기 %d\n", sizeof(string2));
	printf("정수형 배열의 크기 %d\n", sizeof(numbers));
	printf("정수형 배열의 길이 %d\n", sizeof(numbers) / sizeof(int));

	string_[0] = 'G';
	string_[0] = 'G';
	string_[0] = 'G';
	printf("문자열 배열이 정말로 수정되는지? -> %s \n\n", string_);

	bool isNullSameZero = false;
	if (0 == '\0')
	{
		isNullSameZero = true;

	}
	else
	{
		isNullSameZero = false;

	}
	printf("Null은 0과 같은 값인가? : [%d] \n", isNullSameZero);

	char string3[4];
	string3[0] = 'H';
	string3[1] = 'i';
	string3[2] = '!';
	string3[3] = '\0';

	char string4[4] = "Hi!";

	printf("string4번 찍어보겠음. -> %s \n", string3);

}
