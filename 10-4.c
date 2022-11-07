#include <stdio.h>
int bomb[5][5];

void rm_area(int i, int j) {
    int m, n;
    for(m = i-1; m <= i+1; m++) {
        for(n = j-1; n <= j+1; n++) {
            if(m>= 0 && m< 5 && n >= 0 && n < 5) {
                bomb[m][n] = 1;
            }
        }
    }
}

int find() {
    int a, b;
    int cnt = 0;
    for(a = 0; a < 5; a++) {
        for(b = 0; b < 5; b++) {
            if(bomb[a][b] == 0) cnt++;
        }
    }
    return cnt;
}

int main() {
    rm_area(1, 1);
    rm_area(0, 4);
    rm_area(2, 3);
    printf("남은 영역의 크기: %d", find());
    return 0;
}