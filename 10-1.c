#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
랜덤숫자를 5개 발생시키는 프로그램을 만드시오.
랜덤 숫자는 1부터 100사이에 있으며, 발생한 숫자는 중복되어서는 안되며,
발생한 숫자의 중복여부를 체크하지 않고도 위의 문제를 해결하시오
(배열 사용). 
*/
int arr[100];

int shuffle() {
    srand(time(NULL));
    int num1, num2, tmp, i;
    for(i = 0; i < 100; i++) {
        num1 = rand() % 100, num2 = rand() % 100;
        tmp = arr[num1];
        arr[num1] = arr[num2];
        arr[num2] = tmp;
    }
}

int main() {

    int i;
    srand(time(NULL));
    for(i = 0; i < 100; i++) {
        arr[i]= i + 1;
    }
    shuffle();
    for(i = 0; i < 5; i++) printf("%d, ", arr[i]);
    printf("\n");
    return 0;
}