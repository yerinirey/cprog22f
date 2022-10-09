/*세균이 1 시간마다 4 배씩 증가한다고 가정하자 .
이 세균 10 마리를 배양하면 7 시간 후의 세균의 수는 얼마나 될까 ?
반복문을 사용하여 해당 문제를 푸는 프로그램을 만드시오
(강의슬라이드 36 도전문제). */
#include <stdio.h>

int main() {
    int hour = 1 , germ = 10;

    while(hour <= 7) {
        germ = germ * 4;
        hour++;
    }

    printf("7시간 후의 세균은 %d마리\n", germ);

    return 0;
}