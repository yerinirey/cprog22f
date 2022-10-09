/* 구구단을 짝수단만 출력하는 프로그램을 만드시오. */
#include <stdio.h>

int main() {
    int i = 2;

    while(i <= 9) {
        int j = 1;
        while(j <= 9) {
            printf("%d x %d = %d \n", i, j, i*j);
            j++;
        }
        printf("\n");
        i = i + 2;
    }

    return 0;
}