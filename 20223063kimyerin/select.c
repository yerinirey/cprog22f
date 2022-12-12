#include <stdio.h>
#include <stdlib.h>
#include "todo.h"

/* 메뉴를 보여주고 선택하는 함수 */
void SelectMenu(int opt) {
    printf("┌──────────────────────────────────────────────────┐\n");
    printf("│                1. 리스트 생성하기                │\n");
    printf("│                2. 리스트 수정하기                │\n");    
    printf("│                3. 리스트 삭제하기                │\n");
    printf("│                4. 리스트 검색하기(월)            │\n");    
    printf("│                5. 리스트 조회하기(전체)          │\n");
    printf("│                6. 프로그램 종료하기              │\n");
    printf("└──────────────────────────────────────────────────┘\n");
    printf("메뉴를 선택해주세요.( 1 ~ 6 ): ");
    scanf("%d", &opt);

    switch (opt) {
    case 1: ListWrite(); break;
    // case 2: ListEdit(); break;
    case 3: ListDelete(); break;
    case 4: ListSearch(); break;
    case 5: ListPrint(head); break;
    case 6: printf("프로그램을 종료합니다."); exit(0);
    default: printf("잘못된 입력입니다."); break;
    }
}

/* 정렬 방법을 선택하는 함수 */
void SelectSort() {
    int opt;
    if(count == 0) printf("조회할 리스트가 존재하지 않습니다. 먼저 리스트를 작성해주세요. \n");
    else {
        printf("\n┌──────────────────────────────────────────────────┐\n");
        printf("│               1. 마감일 순으로 정렬              │\n");
        printf("│               2. 중요도 순으로 정렬              │\n");
        printf("└──────────────────────────────────────────────────┘\n");
        printf("정렬 방법을 선택해주세요. (1 / 2): ");
        scanf("%d", &opt);
        switch(opt) {
            // case 1: SortbyDate(); break;
            // case 2: SortbyLevel(); break;
            default: printf("잘못된 입력입니다."); break;
        }
    }
}