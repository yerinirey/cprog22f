#include <stdio.h>
int main(void)
{
    int x;
    printf("정수를 입력하세요 = ");
    scanf("%d", &x);
    (x % 2 == 0) ? printf("1\n") : printf("0\n") ;
    return 0;
}