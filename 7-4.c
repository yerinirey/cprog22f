/*숫자 추측 게임 (강의 슬라이드 48)에서
랜덤 숫자를 발생시키는 rand() 함수를 이용하여
100 미만의 숫자를 랜덤으로 발생시킨 버전으로 발전시켜 실행하시오.
(rand 함수 사용법은 강의 슬라이드 81쪽 참조) */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int answer = rand()%100;
    int guess;
    int tries = 0;

    do {
        printf("100 미만의 정수를 추측해 보세요: ");
        scanf("%d", &guess);
        tries++;
        if (guess > answer) printf("더 낮은 수입니다.");
        if (guess < answer) printf("더 높은 수입니다.");
    } while(guess != answer);
    printf("축하합니다. 시도 횟수 = %d", tries);

    return 0;
}