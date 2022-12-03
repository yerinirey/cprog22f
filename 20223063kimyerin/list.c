#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "todo.h"

/* 할 일을 작성하는 함수 */
void ListWrite() {
    int i = 0;
    printf("작성할 Todo 목록 개수를 입력하세요: ");
    scanf("%d", &count);
    todo = (Todo *)malloc(sizeof(Todo) * count);        // 동적 할당
    for(i; i < count; i++) {
        printf("[%d/%d] 마감 날짜를 입력하세요: (월,일 띄어쓰기로 구분): ", i+1, count);
        scanf("%d %d", &todo[i].month, &todo[i].day);
        printf("[%d/%d] 중요도를 입력하세요 (1 ~ 5): ", i+1, count);
        scanf("%d", &todo[i].levelnum);
        switch (todo[i].levelnum) {
            case 1: strcpy(todo[i].levelsq, "■□□□□"); break;
            case 2: strcpy(todo[i].levelsq, "■■□□□"); break;
            case 3: strcpy(todo[i].levelsq, "■■■□□"); break;
            case 4: strcpy(todo[i].levelsq, "■■■■□"); break;
            case 5: strcpy(todo[i].levelsq, "■■■■■"); break;
            default: printf("잘못 입력하셨습니다. 다시 입력해주세요.\n"); break;
        };
        printf("[%d/%d] 내용을 입력하세요 (1 ~ 5):", i+1, count);
        scanf("%s", todo[i].content);
        printf("----------------------------------------------------\n");
    }
}

/* 할 일을 삭제하는 함수 */
void ListDelete() {}

