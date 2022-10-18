#include <stdio.h>
static int i = 1;

int multiple(int num) {
    if(i < 10) {
        printf("%d x %d = %d \n", num, i, num * i);
        i++;
        multiple(num);
    }
}

int main() {
    int n;
    printf("출력하고자 하는 배수를 입력하세요: ");
    scanf("%d", &n);
    printf("%d의 배수를 출력합니다. \n", n);
    multiple(n);
}
