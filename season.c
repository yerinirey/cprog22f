#include <stdio.h>
int main() {
    int month;
    printf("Birth month: ");
    scanf("%d", &month);
    switch(month) {
        case 3:
        case 4:
        case 5:
            printf("You are born in Spring!\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("You are born in Summer!\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("You are born in Autumn!\n");
            break;
        case 12:
        case 1:
        case 2:
            printf("You are born in Winter!\n");
            break;
        default:
            printf("Wrong input\n");
            break;
    }
    return 0;
}