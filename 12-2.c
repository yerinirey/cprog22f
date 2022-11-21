#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 26

void main() {
    char str[] = "The worst things to eat before you sleep";
    char count[100] = {0};
    int len = strlen(str);
    char idx;
    for(int c = 0; c < len; c++) {
        idx = toupper(str[c]) - 'A';
        count[idx] += 1;
    }

    for(int i = 0; i < SIZE; i++) printf("%c = %d\n",i + 'A', count[i]);
}