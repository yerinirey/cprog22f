#include <stdio.h>

long factorial(int n) {
    if(n <= 1) return 1;
    else return n * factorial(n - 1);
}

int main(void) {
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);
    printf("%d!은 %ld입니다. \n", num, factorial(num));
    return 0;
}