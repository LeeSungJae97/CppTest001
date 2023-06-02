// system.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    char userInput = '0';
    int loopCount = 1;

    while (loopCount <= 1000)
    {
        if (loopCount == 1)
        {
            printf("[듀토리얼] 만약 게임을 만들려고 한다면");
            }

        printf("[System] 당신은 플레이어 입니다. \n");
        printf("수행할 액션을 입력해주세요. :  \n");
        scanf_s("%c", &userInput);

        if (userInput == 'q' || userInput == 'Q')
        {
            printf("[System] 프로그램을 종료합니다. \n");
            break;
        }
    
        else
        {
            printf("[System] 해당 입력은 정의되어 있지 않습니다. \n");
            loopCount += 1;
            continue;
        }
        
        loopCount += 1;
    }       // loop: 루프 종료
}       //main 함수 여기서 종료
