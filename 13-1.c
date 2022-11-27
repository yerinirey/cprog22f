/* 2차원 공간의 두 점의 좌표를 입력받아
두 점 사이의 거리를 계산하는 프로그램을 만드시오 */
#include <stdio.h>
#include <math.h>
struct point {
    int x;
    int y;
};

int main() {
    struct point p1, p2;
    int xdiff, ydiff;
    double dist;

    printf("점의 좌표를 입력하시오(x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("점의 좌표를 입력하시오(x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    xdiff = p1.x - p2.y;
    ydiff = p1.y - p2.y;

    dist = sqrt((double)(xdiff * xdiff + ydiff * ydiff));

    printf("두 점 사이의 거리는 %f 입니다.\n", dist);
    return 0;
}