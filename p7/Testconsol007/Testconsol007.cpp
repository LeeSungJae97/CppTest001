// 정렬
// 선택정렬

#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <time.h>

void randomNumbers();
void arraySort(int numbers[]);
void swap(int* number1, int* number2);

int main()
{
    randomNumbers();
}

// 랜덤한 숫자 5개를 뽑아서 배열 안에 넣는 함수
void randomNumbers()
{
    srand(time(NULL));         // 난수발생 시드변경
    int numbers[5] = { 0, };   // 0으로 초기화
    int randomNum = 0;

    printf("랜덤한 숫자 5개를 뽑아보자! : ");
    for (int i = 0; i < 5; i++)
    {
        randomNum = rand() % 10numbers[i] = randomNum;0;
        

        printf("%d ", numbers[i]);
    }
    printf("\n\n");

    arraySort(numbers);

}

// 배열 안에 있는 5개의 숫자를 오름차순으로 정리하는 함수
void arraySort(int numbers[])
{
    for (int x = 0; x < 5; x++)    // 0
    {
        for (int y = x; y < 5; y++)
        {
            if (numbers[x] > numbers[y])
            {
                printf("스왑 할 두 수 : (numbers[%d] %d) / (numbers[%d] %d)\n\n", x, numbers[x], y, numbers[y]);  // 스왑
                swap(&numbers[x], &numbers[y]);

                printf("현재 배열에 들어있는 값의 순서\n");
                for (int z = 0; z < 5; z++)
                {
                    printf("%d ", numbers[z]);
                }
                printf("\n");
            }
        }
    }

    printf("정렬 후 배열에 들어 있는 값의 순서\n");
    for (int x = 0; x < 5; x++)
    {
        printf("%d ", numbers[x]);
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