// critical.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void ctd(int dm)
{
    float dmp = 1.5;
    printf("크리티컬 데미지 %0.f%%", dm * dmp);
}


int main()
{
    
    ctd(100);
}

