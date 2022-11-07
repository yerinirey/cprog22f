#include <stdio.h>
#include <stdlib.h>
/*정수를 10000개 저장할 수 있는 배열 src 와 dest 가 있다.
src 배열은 0번째 칸부터 0 ~ 9999 까지의 숫자를 저장하고,
dest 배열은 src 배열의 값을 복사하는데 인덱스를 뒤에서부터 복사한다. 
예: src 배열에 0 1 2 3 4 5  가 저장되어 있다면 dest 에는
5 4 3 2 1 0 이 저장되도록 함. 
src 와 dest 의 처음 10개의 원소를 출력하시오. 
*/
int main() {
    int src[9999];
    int dest[9999];
    int i;
    for(i = 0; i < 10000; i++) {
        src[i] = i;
    }
    for(i = 0; i < 10000; i++) {
        dest[i] = src[10000 - i - 1];
    }

    for(i = 0; i < 10; i++) {
        printf("src[%d] = %d \n", i, src[i]);
    }
    for(i = 0; i < 10; i++) {
        printf("dest[%d] = %d \n", i, dest[i]);
    }
}