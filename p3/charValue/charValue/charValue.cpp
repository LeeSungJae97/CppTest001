// charValue.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void CharCheck(char someAlphabet);


int main()
{
	/*char charValue = 'B';

	printf("char 출력할 때는 C로 해보자. → %c \n", 97);

	bool isSame = ('A' == 65);

	char someAlphabet = 'D' ;
	bool isBigAlphabet = ('A' <= someAlphabet || someAlphabet <= 'z');
	printf("\nsomeAlphabet은 대문자인가?? %d \n", isBigAlphabet);*/

	
	char someAlphabet;
	int search;
	printf("문자입력 : ");
	scanf_s("%c",&someAlphabet);
	CharCheck(someAlphabet);
	

	/*bool isBigAlphabet = ('#' <= someAlphabet || someAlphabet <= '$');
	printf("\nsomeAlphabet은 알파벳 인가? %d \n", isBigAlphabet);

	bool isAlphabet = ('#' <= someAlphabet || someAlphabet <= '$');
	printf("\nsomeAlphabet은 소문자 알파벳 인가? %d \n", isAlphabet);

	bool isoneAlphabet = ('@' == someAlphabet || someAlphabet == '@');
	printf("\nsomeAlphabet은 특수문자 인가? %d \n", isoneAlphabet);*/
		
}


void CharCheck(char someAlphabet)
{
	printf("알파벳 여부 : %d", 
		((someAlphabet >= 65 && someAlphabet <= 90) || (someAlphabet >= 97 && someAlphabet <= 122)) ||
		(someAlphabet >=33 && someAlphabet <=47 ) || (someAlphabet >=58 && someAlphabet <= 64) || 
		(someAlphabet >=91 && someAlphabet <=96 ) || (someAlphabet >= 123 && someAlphabet <=126 ));


	((someAlphabet >= 65 && someAlphabet <= 90) || (someAlphabet >= 97 && someAlphabet <= 122)) ? printf("\n 알파벳이다.") :
		(someAlphabet >= 33 && someAlphabet <= 47 ) || (someAlphabet >= 58 && someAlphabet <= 64 ) || 
		(someAlphabet >= 91 && someAlphabet <= 96) || (someAlphabet >= 123 && someAlphabet <= 126) ? printf("\n 특수문자다.") : printf("\n 특수문자아니다.");
		// a == b ? 맞을때 : 틀릴 때
}       //(조건식)? A : B  → (age < 20)?"20살보다 작다" : "20살보다 크다"
// (A > 0) ?  ((A > 10) ? 참 : 거짓) :((A < -10) ? 참 : 거짓);


// (A > B) ? 맞다(C) : 틀리다(D)
// 
//C 는 A > B ? C : D
//D 는 A > B ? C : D







//if (a != 0) {
//	printf("");
//}
//else print(A) // if 끝남






































// 조건식 ? 참 : 거짓

// 조건식 ? 참 : 거짓
//참:  0>8 ? 참 : 거짓 
///거짓: b==1 ? "b=1" : 거짓
//ㅔ갸ㅜㅅㄹ("", 변수)
// 
// 
// 1 : 1 ? 1 : 1
/


int a = 0;
Circle(1);


