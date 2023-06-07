// dataswap.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Descruption003();

void Swap(char firstChar, char secondChar);    // *하나 때메 스왑 둘은 다르다 
void Swap2(char* firstChar, char* secondChar);

int main()
{
    char str[10] = "Hello"; //index는 0부터 시작
    char temp = '\0';

    //Descruption003();
    Swap2(&str[0],&str[4]);
    printf("%s", str);
   /* Swap;*/
}

void Descruption003()
{
    char str[10] = "Hello"; //index는 0부터 시작
    char temp = '\0';

    temp = str[0]; //H
    str[0] = str[4];//o
    str[4] = temp;//h

    // str = oellh; 0번 부터 o  ELL  4번 H

    /*printf("str의 0번째 값 : %c, str의 4번째 값 : %c \n", str[0], str[4]);*/
    printf("%s \n", str);
}

void Swap2(char* firstChar, char* secondChar)
{

    printf("[스왑하기 전]firstChar 값 : %c, secondChar 값 : %c \n", *firstChar, *secondChar);
    char temp = '\0';

    temp = (*firstChar);
    (*firstChar) = (*secondChar);
    (*secondChar) = temp;
    printf("[스왑하기 후]firstChar 값 : %c, secondChar 값 : %c \n", *firstChar, *secondChar);
}


void Swap(char firstChar, char secondChar)
{

    printf("[스왑하기 전]firstChar 값 : %c, secondChar 값 : %c \n", firstChar, secondChar);
    char temp = '\0';

    temp = firstChar;
    firstChar = secondChar;
    secondChar = temp;
    printf("[스왑하기 후]firstChar 값 : %c, secondChar 값 : %c \n", firstChar, secondChar);
}