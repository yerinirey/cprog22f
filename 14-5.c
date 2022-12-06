#include <stdio.h>
#include <stdlib.h>
/*
qsort 라이브러리를 사용해서 정수 배열을 정렬한 후
출력해주는 프로그램을 만드시오. (강의 슬라이드 54)
*/
/*
qsort(정렬할배열, sizeof(int), compare) */
int values[] = {98, 23, 99, 37, 16};
int num = sizeof(values) / sizeof(int);

int compare(const void * a, const void * b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    
    qsort(values, num, sizeof(int), compare);
    printf("정렬한 후 배열: ");
    for(n = 0; n < num; n++) printf("%d ", values[n]);
    printf("\n");

    return 0;
}

