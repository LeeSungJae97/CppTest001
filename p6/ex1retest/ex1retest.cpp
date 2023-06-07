// ex1retest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    char cou[500];
    int point = 0;

    printf("문자를 입력하시오! \n");
    std::cin >> cou;
   

    while (cou[point]);
    {
        if (cou[point] >= 65 && cou[point] <= 90)
        {
            cou[point] += 32; // cou[point] = cou[point] + 32;
        }
        else if (cou[point] >= 97 && cou[point] <= 122)
        {
            cou[point] -= 32;
        }

        point++;
    }
       
    

    printf("문자값 %s \n", cou);
        
}

