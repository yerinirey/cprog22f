#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_NUM 100

enum TYPES {SHIRTS, PANTS, DRESS};

struct item {
    int type;

    union {
        char sml[4];
        int num;
    } size;
};

int main() {
    // product array
    struct item prod[MAX_NUM];

    // file open
    FILE * fp = fopen("item.dat", "r");

    if(!fp) {
        printf("Failed to open file \n");
        return -1;
    }

    // read products
    int type;
    char size[100];

    int i = 0;
    while(!feof(fp)) {
        fscanf(fp, "%d %s\n", &type, size);

        switch(type) {
            /* do program */
            case 1:
                prod[i].type = SHIRTS;
                prod[i].size.num = atoi(size);
                break;
            case 2:
                prod[i].type = PANTS;
                strcpy(prod[i].size.sml, size);
                break;
            case 3:
                prod[i].type = DRESS;
                strcpy(prod[i].size.sml, size);
                break;
        }
        i++;
    }

    // print products
    for(int j = 0; j < i; j++) {
        switch(prod[j].type) {
            /*do program */
            case SHIRTS:
                printf("셔츠 %d호\n", prod[j].size.num);
                break;
            case PANTS:
                printf("바지 %s사이즈\n", prod[j].size.sml);
                break;
            case DRESS:
                printf("원피스 %s사이즈\n", prod[j].size.sml);
                break;
            default:
                break;
        }
    }

    return 0;
}