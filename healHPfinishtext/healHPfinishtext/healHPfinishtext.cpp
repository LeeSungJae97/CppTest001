// healHPfinishtext.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


int heal2()
{
    int maxHp = 50;
    int hp = 20;
    int heal = 1;

    hp = hp + heal;

    int end = (hp > maxHp) ? maxHp : hp;
    return end;

}

int main()
{   
    printf("현재 HP : %d", heal2());
}


// 현재 체력은 20이다
// 힐량을 원하는 값으로 받아서 체력을 회복한다
// 하지만 최대체력을 넘으면 안된다.
// 최대 체력은 50이다.