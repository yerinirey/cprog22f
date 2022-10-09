/* 사용자로부터 숫자 n을 입력받아 1부터 n 이하의 수 중에서 소수를 모두 출력하는 프로그램을 만드시오.
소수를 판별하거나 출력하는 작업을 main 함수가 아닌 다른 함수를 사용하여 구현하고 (예: is_prime),
소수 판별과정에서 불필요한 검사는 (최대한) 하지 않도록 최적화 하시오.
필요한 경우 math 라이브러리 함수를 사용할 것. */
#include <stdio.h>

int is_prime(int num) {
    if(num == 1) printf("소수가 존재하지 않습니다.");
    else {
        for(int i = 2; i < num; i++) {
            if(num % i == 0) return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("숫자를 입력하세요: ");
    scanf("%d", &n);
    printf("\n-----소수 목록-----\n");
    for(int i = 2; i < n+1; i++) {
        if(is_prime(i) == 1) printf("%d, ", i);
    }
    printf("\n");
    return 0;
}