// ex1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 문자열 입력 받아서 -> 출력하는 것
//문자열을 입력 받아서 대문자-소문자-대문자-소문자,... 
//순으로 수정해서 출력하는 프로그램(easy)
//위의 프로그램을 수정해서 거꾸로 뒤집어서 출력하는 프로그램 작성하기(Nomal)
//while 반복 횟수를 잘 모를때 for 반복횟수를 알고 있을때 지알아서 나간다.
//if 특정 조건때만 실행 ex(if (cou[point] >= 65 && cou[point] <= 90))

#include <iostream>


//void  Description002();

char input[1000]; // 1000개의 방이 있다. 
int count = 0; // a부터 1000개가 있으니 0~999니까 0을 썼다. 왜냐면 
                // abababaabababababab = a=0 b=1 a=2 b=3 a=4 이렇게 되니까.

void main()
{
    char input[1000];

    int count = 0;

    printf("문자열을 입력하세요 \n");
    std::cin >> input;

    //a b c
    // input의 값을 변경하는 로직
    while (input[count]) {
        if (input[count] >= 65 && input[count] <= 90) // 대문자
            input[count] += 32; //소문자 치환
        else if (input[count] >= 97 && input[count] <= 122) // 소문자
            input[count] -= 32; //대문자 치환
           
        count++;
    }
    
    // 변경된 input을 출력하는 곳
    printf("%s", input);
}