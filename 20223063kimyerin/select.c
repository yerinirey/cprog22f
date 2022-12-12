#include <stdio.h>
#include <stdlib.h>
#include "todo.h"

void (*func[5])() = {ListWrite, ListEdit, ListDelete, ListList, ListExit};

/* 메뉴를 보여주고 선택하는 함수 */
void SelectMenu(int opt) {
    printf("┌──────────────────────────────────────────────────┐\n");
    printf("│                1. 리스트 생성하기                │\n");
    printf("│                2. 리스트 수정하기                │\n");    
    printf("│                3. 리스트 삭제하기                │\n");
    printf("│                4. 리스트 검색하기                │\n");    
    printf("│                5. 프로그램 종료하기              │\n");
    printf("└──────────────────────────────────────────────────┘\n");
    printf("메뉴를 선택해주세요.( 1 ~ 5 ): ");
    scanf("%d", &opt);
    printf("=========================================\n");
    if(opt<6 && opt>0) func[opt-1]();
    else printf("잘못된 입력입니다.\n");
}
