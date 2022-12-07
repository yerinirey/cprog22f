#include <stdio.h>
#include "todo.h"

/* 날짜 순으로 정렬하고 출력하는 함수 */
void SortbyDate() {
    int i, j, n;
    Todo * tmp;
    for(i = 0; i < count; i++) {
        for(j = i + 1; j < count; j++) {
            if(todo[i].month > todo[j].month) {     // 월 정렬
                *tmp = todo[i];
                todo[i] = todo[j];
                todo[j] = *tmp;
            }
            if(todo[i].day > todo[j].day) {     // 일 정렬
                *tmp = todo[i];
                todo[i] = todo[j];
                todo[j] = *tmp;
            }
        }
    }
    
    printf("========================================================\n");
    for(n = 0; n < count; n++) {
        printf("%d / %d\t\t%s\t\t%s\n",todo[n].month, todo[n].day, todo[n].levelsq, todo[n].content);
    }


}

/* 중요도 순으로 정렬하는 함수 */
void SortbyLevel() {
    int i, j, n;
    Todo * tmp;
    for(i = 0; i < count; i++) {
        for(j = i + 1; j < count; j++) {
            if(todo[i].levelnum < todo[j].levelnum) {     // 중요도 5 ~ 1 정렬
                *tmp = todo[i];
                todo[i] = todo[j];
                todo[j] = *tmp;
            }
        }
    }
    printf("========================================================\n");
    for(n = 0; n < count; n++) {
        printf("%d / %d\t\t%s\t\t%s\n",todo[n].month, todo[n].day, todo[n].levelsq, todo[n].content);
    }
}