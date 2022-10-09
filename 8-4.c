/* 주사위를 던지는 프로그램을 만든다.
그런데 이 주사위는 모양이 조금 이상해서 1 과 2가 다른 숫자들 대비
3배 더 높은 확률로 나와야 한다 (실행결과 나오도록 캡처.
실행결과는 해당 프로그램을 실행하면 주사위 숫자가 하나 튀어나와야 함). */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num = rand() % 10;
    switch(num) {
        case 0:
        case 1:
        case 2:
            printf("1\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("2\n");
            break;
        case 6:
            printf("3\n");
            break;
        case 7:
            printf("4\n");
            break;
        case 8:
            printf("5\n");
            break;
        case 9:
            printf("6\n");
            break;
    }
    return 0;
}