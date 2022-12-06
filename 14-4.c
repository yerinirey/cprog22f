#include <stdio.h>
#define ROWS 5 //행
#define COLS 3 //렬

double get_col_avg(int m[][COLS], int c) { // 2열 평균값 구하기
    int * p, *ep;
    double sum = 0.0;

    p = &m[0][c];
    ep = &m[ROWS][c];

    while(p < ep) {
        printf("%d\n", *p); //m[0][2] ~ m[4][2] 출력됨
        sum += *p;
        p += COLS;
    }
    return sum / ROWS;
}

int main() {
    int m[ROWS][COLS];

    //init
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            m[i][j] = i + j;
        }
    }

    double avg = get_col_avg(m, 2);

    printf("%f\n", avg);
}

/* ROWS 행 = 5   COLS 열 = 3
0 1 2
1 2 3
2 3 4
3 4 5
4 5 6
*/