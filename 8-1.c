#include <stdio.h>

int get_sum(int x, int y) {
    return x + y;
}
int get_diff(int x, int y) {
    if(x > y) return x - y;
    else return y - x;
}
int get_mul(int x, int y) {
    return x * y;
}
double get_div(int x,int y) {
    return (double)x/y;
}

int main() 
{
    int a, b; 
    printf("Type two integers: "); 
    scanf("%d %d", &a, &b); 

    printf("sum = %d\n", get_sum(a, b)); 
    printf("diff = %d\n", get_diff(a, b));  // 두 수의 차의 절대값이 나와야 함. 
    printf("mul = %d\n", get_mul(a, b)); 
    printf("div = %f\n", get_div(a,b)); // a/b가 나와야 함 (실수 형태로). 

    return 0; 
}
