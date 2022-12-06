#include <stdio.h>

void swap(char **a, char**b) {
    char *tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    char *p = "Hello";
    char *q = "Goodbye";

    printf("%s\n", p); 
    printf("%s\n", q); 

    swap(&p, &q);

    printf("%s\n", p); 
    printf("%s\n", q); 

    return 0;
}
