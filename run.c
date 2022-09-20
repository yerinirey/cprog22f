
#include<stdio.h>
#define PI 3.141592

int main()
{   int panda, hoarse;
    printf("Type the speed\n Panda:");
    scanf("%d\n", &panda);
    scanf("%d\n", &hoarse);
    double t = 10 * PI / (panda + hoarse);
    printf("t: %f", t);


}