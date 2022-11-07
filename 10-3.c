#include <stdio.h>
/* 배열을 인자로 넘겨서 최대값과 최소값을 리턴해주는
함수 get_min, get_max 를 각각 만드시오.
배열의 초기값은 {40, 21, 13, 74, 5}로 하세요 (강의슬라이드 42 참고). 
*/
int get_min(int listName[]) {
    int min, i;
    for(i = 0; i < 4; i++) {
        if(listName[i] > listName[i+1]) min = listName[i+1];
        else min = listName[i];
    }
    return min;
}

int get_max(int listName[]) {
    int max, i;
    for(i = 0; i < 4; i++) {
        if(listName[i] > listName[i+1]) max = listName[i];
        else max = listName[i+1];
    }
    return max;
}


int main() {
    int list[5] = {40, 21, 13, 74, 5};
    printf("min = %d\n", get_min(list));
    printf("max = %d\n", get_max(list));
}
