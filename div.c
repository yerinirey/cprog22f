#include <stdio.h>

int main(void)
{
    int a, b;
    printf("첫번째 정수를 입력하세요 = ");
    scanf("%d", &a);
    printf("\n두번째 정수를 입력하세요 = ");
    scanf("%d", &b);
    printf("\n%lf", (double)a / b);
    return 0;
}
