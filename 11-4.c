#include <stdio.h>
#define SIZE 5

int main() {
    int sum = 0;
    int arr[5] = {2, 4, 6, 8, 10};
    int *ptr = arr;
    for(int i = 0; i < SIZE; i++) {
        sum += *ptr++;
    }
    printf("합: %d, 평균: %d\n", sum, sum / SIZE);
    return 0;
}

