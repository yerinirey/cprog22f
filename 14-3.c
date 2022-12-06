#include <stdio.h>
#include <stdlib.h>
/*[함수를 인자로 넘기는 연습] 
두 개의 원이 같은지 판별하는 print_equal 함수를 만드는데,
두 원의 “같음”을 판단하는 함수를 인자로 받도록 구현하시오.
각 원은 중심과 반지름을 저장하는 struct circle 로 정의되며,
중심과 반지름이 모두 같아야 원이 같다고 판단한다.
해당 함수명은 circle_comp 로 구현한다 (강의 슬라이드 26의 변형)  
*/
typedef struct circle {
    int x;
    int y;
    int r;
}Circle;

int circle_comp(Circle a, Circle b) {
    return ((a.x==b.x) && (a.y==b.y) && (a.r==b.r)) ? 1 : 0;


}

void print_equal(Circle a, Circle b, int (*func)() ) {
    if(func(a, b)) printf("같음\n");
    else printf("다름\n");

}

int main() {
    Circle p1, p2;
    scanf("%d %d %d", &p1.x, &p1.y, &p1.r);
    scanf("%d %d %d", &p2.x, &p2.y, &p2.r);
    print_equal(p1, p2, circle_comp);

    return 0;
}