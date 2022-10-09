/* 아래와 같이 직각 삼각형이 있다.
변 a와 각도 d 가 주어졌을 때 삼각형의 높이 b룰 구하는 프로그램을 만드시오.
get_height() 함수를 정의하여 main 에서 호출하는 형태로 구현할 것.
넘기는 argument 는 자유롭게 생각하되 return value 로는 b를 받아야 하고
main 함수에서 출력해줄 것. 
(강의 슬라이드 66페이지의 “나무 높이 측정” 예제를 참고할 것) */
#include <math.h>
#include <stdio.h>

double get_height(double line, double deg) {
    double rad = deg * (3.141592 / 180.0);
    double height = tan(rad) * line;
    return height;
}


int main() {
    double a, d;
    printf("변의 길이: ");
    scanf("%lf", &a);
    printf("각도: ");
    scanf("%lf", &d);
    printf("변 b의 길이: %lf\n", get_height(a,d));
    
    return 0;
}