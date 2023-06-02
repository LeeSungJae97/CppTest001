// sizeof.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()//int를 short로 바꾸는 최적화 안해도됨 pc에 한해서
{
    char charValue = 'A';   //문자 하나를 저장하기 위한 데이터 타입
    short shortValue = 10;  //int 보다 작은 수를 저장하기 위한 데이터 타입
    int intValue = 100;     //가장 만만한 수를 저장하기 위한 데이터 타입
    long longValue = 200;   //int가 커져서 이제 잘 안쓰는 데이터 타입
    long long longLongValue = 1000;//int보다 큰 수를 저장하기 위한 데이터 타입

    //실수형 데이터 타입들
    float floatValue = 10.1;            //가장 만만한 실수를 저장하기 위한 데이터 타입
    double doubleValue = 100.1;         //float 보다 큰 실수를 저장하기 위한 데이터 타입
    long double longDoubleValue = 200.1;//double 보다 큰 실수를 저장하기 위한 데이터 타입

    printf("char 의 크기는? %d byte. \n", sizeof(charValue));
    printf("short 의 크기는? %d byte. \n", sizeof(shortValue));
    printf("int 의 크기는? %d byte. \n", sizeof(intValue));
    printf("long 의 크기는? %d byte. \n", sizeof(longValue));
    printf("long long 의 크기는? %d byte. \n", sizeof(longLongValue));
  
    printf("float 의 크기는? %d byte. \n", sizeof(floatValue));
    printf("double 의 크기는? %d byte. \n", sizeof(doubleValue));
    printf("long double 의 크기는? %d byte. \n", sizeof(longdoubleValue));


}

