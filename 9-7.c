/* 어떤 농장에 토끼가 한쌍 있다. 
만약 각 쌍이 두 번째 달부터 매달 토끼를 한 쌍씩 낳는다고 가정한다면
그 해에 얼마나 많은 쌍의 토끼가 생기는가? 
이를 일반화 시켜 n개월 후의 토끼 쌍의 개수를 세는 프로그램을
재귀함수 형태로 만드시오. */
#include <stdio.h>

long long int fibo(int month) {
    if(month <= 2) return 1;
    return fibo(month - 2) + fibo(month - 1);
}

int main() {
    int n;
    printf("개월 수를 입력하세요: ");
    scanf("%d", &n);
    printf("\n%lld쌍\n", fibo(n));
    return 0;
}
