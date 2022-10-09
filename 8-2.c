/* rand 함수를 이용해 “당첨"과 “꽝"을 발생시키는 룰렛 돌리기 프로그램을 만드시오.
그런데 “꽝"이 “당첨” 보다 2배 더 높은 확률로 나오도록 해보시오.
한번 실행 시 룰렛을 10번 돌려서 확률이 제대로 동작하는지 확인하시오. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int random;

    printf("룰렛을 돌립니다.");
    for(int i = 0; i<10; i++) {
        random = rand() % 3;
        if(random == 1 || random == 2) printf("%d 꽝\n", random);
        else printf("%d 당첨\n", random);
    }
}

