// const.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//원의 반지름을 입력받아서 원의 넓이를 출력하는 프로그램 작성해보기
//함수를 사용할 것,전방선언 해볼 것, 원의 반지름은 정수

#include <iostream>

float halfcicle(float pi, int radius);

int main()
{
    /*float result ;*/
    const float PI = 3.141592f;
    int radius ;
    printf("반지름? : ");
    scanf_s("%d", & radius);

    /*result = PI * radius * radius ;
    printf("%f * (%d * %d) = %f \n", PI, radius, radius, result );*/

    printf("원의 넓이 : %f", halfcicle(PI, radius));

    
}

// 원의 넓이를 구함 원주율 * 반지름*반지름
float halfcicle(float 元州律, int 안녕)
{
    return 元州律 * 안녕 * 안녕;
}
