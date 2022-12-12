#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "todo.h"

// void txtWrite(Node * node) {
//     FILE *fp;
//     fp = fopen("todo.txt", "w");
//     if(fp = NULL) printf("failed to open todo.txt\n"); exit(1);
//     for(int i = 0; i < count; i++) {
//         txtRead(node, fp);
//     }
//     fclose(fp);
// }

// void txtRead(Node * node, FILE * fp) {
//     fprintf("%d %d %s %s", node->todo->month,node->todo->day,node->todo->levelsq,node->todo->content);
//     fputs("\n", fp);
// }