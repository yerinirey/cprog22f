#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "todo.h"

/* 할 일을 작성하는 함수 */
void ListWrite() {
    int i = 0;
    int n;  //작성 개수
    printf("작성할 Todo 목록 개수를 입력하세요: ");
    scanf("%d", &n);
    count += n;
    todo = (Todo *)malloc(sizeof(Todo) * n);        // 동적 할당
    for(i; i < n; i++) {
        printf("[%d/%d] 마감 날짜를 입력하세요: (월,일 띄어쓰기로 구분): ", i+1, n);
        scanf("%d %d", &todo[i].month, &todo[i].day);
        re:
        printf("[%d/%d] 중요도를 입력하세요 (1 ~ 5): ", i+1, n);
        scanf("%d", &todo[i].levelnum);
        switch (todo[i].levelnum) {
            case 1: strcpy(todo[i].levelsq, "■□□□□"); break;
            case 2: strcpy(todo[i].levelsq, "■■□□□"); break;
            case 3: strcpy(todo[i].levelsq, "■■■□□"); break;
            case 4: strcpy(todo[i].levelsq, "■■■■□"); break;
            case 5: strcpy(todo[i].levelsq, "■■■■■"); break;
            default: printf("잘못 입력하셨습니다. 다시 입력해주세요.\n"); goto re;
        };
        printf("[%d/%d] 내용을 입력하세요 (1 ~ 5):", i+1, count);
        scanf("%s", todo[i].content);
        printf("----------------------------------------------------\n");
    }
}

/* 할 일을 삭제하는 함수 */
void ListDelete() {
    int num;
    printf("삭제할 리스트 번호를 입력해주세요(0~%d): ", count);
    scanf("%d", &num);
    if(num < count && num >= 0) { 
        // 'num'번째 인덱스를 기준으로 좌로 한칸씩 이동
        for( num; num < count; num++) todo[num] = todo[num + 1];
        count--;
    }
    else printf("잘못된 입력입니다. 리스트가 삭제되지 않았습니다.\n");
}

