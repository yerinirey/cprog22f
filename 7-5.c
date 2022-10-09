/* 도박사의 확률 (강의슬라이드 83)
문제를 코딩하고 목표금액이 250달러가 아니라
200달러일 때 라스베이거스에 100번을 간다면
몇번이나 200달러를 따서 돌아올 수 있는지 결과를 출력해 보시오. */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int initial_money = 50;
    int goal = 200;
    int i;
    int wins = 0;

    for (i = 0;i < 100; i++) {
        int cash = initial_money;
        while (cash > 0 && cash < goal) {
            if (((double)rand() / RAND_MAX) < 0.5) cash++; 
            else cash--; 
        }
        if (cash == goal) wins++; 
    }

    printf("초기 금액 $%d \n", initial_money);
    printf("목표 금액 $%d \n", goal);
    printf("100번 중에서 %d번 성공\n", wins);
    return 0;
}