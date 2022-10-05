#include <stdio.h>
#include <math.h>

int main() {
    
    double a, b, c, dis;

    printf("계수 a를 입력하세요: ");
    scanf("%lf", &a);

    printf("\n계수 b를 입력하세요: ");
    scanf("%lf", &b);

    printf("\n계수 c를 입력하세요: ");
    scanf("%lf", &c);

    if( a == 0)
        printf("\n방정식의 근은 %f 입니다.", -c/b);
    else
    {
        dis = (b*b - 4.0 * a * c);
        if( dis >= 0)
        {
            printf("\n방정식의 근은 %f입니다. \n", (-b + sqrt(dis)) / (2.0 * a));
            printf("\n방정식의 근은 %f입니다. \n", (-b - sqrt(dis)) / (2.0 * a));
        }
        else printf("\n실근이 존재하지 않습니다.");
    }
    return 0;
}