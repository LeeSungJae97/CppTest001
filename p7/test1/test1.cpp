// test1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void test(int* a, int* b);
void swap(int& i, int& j);
void Swap(char firstChar, char secondChar);
void main()
{
    int arr[5] = { 21,59,36,99,17 };

    int size = 5;

    printf("main 함수에서 초기 값 : %d %d\n", arr[0], arr[4]);
    printf("main 함수에서 초기 주소 값 : %d %d\n\n", &arr[0], &arr[4]);

    for (int i = 0; i < 5; i++)
    {
            printf("%d \n", arr[1]);
       
    }

    for (int i = 0; i < size - 1; i++)
    {
        int minValue = arr[i];
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (minValue > arr[j])
            {
                minValue = arr[j];
                minIndex = j;

            }

        }

    }



    test(&arr[0], &arr[4]);

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);

    }

}

void test(int* a, int* b) {


    printf("swap 함수에서 초기 값 : %d %d\n", *a, *b);
    printf("swap 함수에서 초기 주소 값 : %d %d\n\n", a, b);

    int tmp = *b;
    *b = *a;
    *a = tmp;

    // **실수한 내용
    // a,b의 포인터의 값이 아닌, 변수 메모리 주소를 swap 하려했으나,
    // 아래와 같이 진행하게 되면, (주소만 swap됨)
    // 기존 : *a = &arr[0], *b = &arr[4] 에서
    // *a = &arr[4], *b = &arr[0]
    // 이 될 뿐 주소의 값은 swap 되지 않는다.


    //int *tmp = b;
    //b = a;
    //a = tmp;

    printf("swap 함수에서 처리 후 값 : %d %d\n", *a, *b);
    printf("swap 함수에서 처리 후 주소 값 : %d %d\n\n", a, b);

}