#include <stdio.h>
#include <stdlib.h>
#include <string.h>
double add(int x, int y);
double sub(int x, int y);
double mul(int x, int y);
double divide(int x, int y);

int main(int argc,char *argv[]) {
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int n = atoi(argv[3]);
    double (*pf[4])(int, int) = {add, sub, mul, divide};
    float result = pf[n](x, y);
    printf("%.1f\n", result);
}

double add(int x, int y) {
    return x + y;
}
double sub(int x, int y) {
    if(x > y) return x - y;
    else return y - x;
}
double mul(int x, int y) {
    return x * y;
}
double divide(int x, int y) {
    return (double)x / y;
}