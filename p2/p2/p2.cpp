// p2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream> 
#include <stdio.h > //#있으면 전처리기 지시문
                    //#include 안에 <,> 안에 적어주는 것이 헤더파일(규칙만 알면 누구나 쉽게 이용가능)

void MyNewPrint(int number)
{
    printf("입력 값은 %d 입니다. \n", number); //함수의 정의
}
//void aaaa(int number) {} 이렇게 해도 된다.

int plusThreeNumbers(int number1, int number2 , int number3)
{
    printf("입력 값은 %d,%d,%d 입니다", number1, number2, number3);
    return number1 * number2 * number3; //return은 반환 값

}


int main(void) //메인함수  
{   
    int number = 10; //ex변수
    std::cout << "Hello World!\n";
    printf("123 123 Hello world! \t\t\t"); //ex함수
    printf("Hello world! \n"); 
    printf("Hello world! %d \n\n\n",number-2);

    MyNewPrint(100);  //실제로 함수를 사용하는 줄에서 함수를 부른다.(call)

    printf("세 수의 곱은 %d 입니다. \n\n", plusThreeNumbers(5, 7, 9));
    //return 0; void 때는 없애야 한다. return을 만나는 순간 함수는 종료 된다. 중간에 끝내고 싶을때 쓴다.
}   
//comment 주석 이 라인은 프로그램에 영향을 주지 않는다.
//내가 필요한 글자를 마음대로 적으면 된다.
    
// 한줄 주석이라고 한다.
    
/*  
*이걸 여러 줄 주석이라고 한다.
* 여러줄 주석
* 이 라인들은 프로그램에 영향을 주지 않는다.
*/
