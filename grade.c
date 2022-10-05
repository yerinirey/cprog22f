#include <stdio.h>

int main()
{   int score;
    printf("점수를 입력하세요: ");
    scanf("%d", &score);

    if( score > 90) {
        printf("\nA");
    }
    else if(score <= 90 && score > 80) {
        printf("\nB");
    }
    else if( score <= 80 && score > 70) {
        printf("\nC");
    }
    else if( score <=70 && score > 60) {
        printf("\nD");
    }
    else { printf("\nF");}

    return 0;
}