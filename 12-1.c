#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    char * prefix = "student";
    char suffix[100];
    char fname[100];
    char * dot = ".";

    printf("File extension: ");
    scanf("%s", suffix);

    strcpy(fname, prefix);
    strcat(fname, dot);
    strcat(fname, suffix);

    printf("File name : %s\n", fname);
}