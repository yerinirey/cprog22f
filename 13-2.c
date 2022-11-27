/* 원을 표현하기 위한 struct circle 를 정의하고, 두개의 원의 정보를 입력한 후
두 원이 동일한 원인지 출력해주는 프로그램을 만드시오. */

#include <stdio.h>
struct circle {
    int x;
    int y;
    int r;
};

int main() {
    struct circle p1, p2;

    printf("원의 중심의 좌표와 반지름을 입력하세요(x y r): ");
    scanf("%d %d %d", &p1.x, &p1.y, &p1.r);
    printf("원의 중심의 좌표와 반지름을 입력하세요(x y r): ");
    scanf("%d %d %d", &p2.x, &p2.y, &p2.r);

    if((p1.x == p2.x) && (p1.y == p2.y) && (p1.r == p2.r))
    printf("두 원은 동일합니다.\n");
    else printf("두 원은 다릅니다.\n");
    return 0;
}
