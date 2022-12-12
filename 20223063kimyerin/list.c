#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "todo.h"

/* 할 일을 작성해주는 노드 */
Node* Write(Node* node)                 
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->todo = (Todo*)malloc(sizeof(Todo));
    newNode->NEXT = NULL;

    if (node == NULL)
    {   int _month;          // 월
        int _day;            // 일
        int _levelnum;       // 중요도 (숫자)
        char _levelsq[100];
        char _content[100];

        printf("마감 날짜를 입력하세요(MMDD): ");
        scanf("%2d%2d", &_month, &_day);
        date:
        if(_month < 1 || _month > 13 || _day < 1 || _day > 31) {
            printf("유효하지 않는 날짜입니다. 다시 입력해주세요."); goto date;
        }
        printf("중요도를 입력하세요 (1 ~ 5): ");
        scanf("%d", &_levelnum);
        printf("내용: ");
        scanf("%s", _content);

        newNode->todo->month = _month;
        newNode->todo->day = _day;
        newNode->todo->levelnum = _levelnum;
        switch (_levelnum) {
            case 1: strcpy(newNode->todo->levelsq, "■    "); break;
            case 2: strcpy(newNode->todo->levelsq, "■■   "); break;
            case 3: strcpy(newNode->todo->levelsq, "■■■  "); break;
            case 4: strcpy(newNode->todo->levelsq, "■■■■ "); break;
            case 5: strcpy(newNode->todo->levelsq, "■■■■■"); break;
        }
        strcpy(newNode->todo->content, _content);
        printf("=========================================\n");
        newNode->NEXT = NULL;
        return newNode;
    }
    node->NEXT = Write(node->NEXT);
    return node;
}

/* 월을 입력해서 할 일 찾는 노드 */
Node* Search(Node* node, int month)
{
    if (node == NULL)
        return NULL;
	
    if (node->todo->month == month)
        return node;

    return Search(node->NEXT, month);
}

/* 날짜를 입력해서 할 일 삭제하는 노드 */
Node* Delete(Node* node, int delmonth, int delday)
{
    if (node == NULL) return NULL;
	
    if (node->todo->month == delmonth && node->todo->day == delday)
    {
        Node* nextNode = node->NEXT;
        free(node);
		
        return nextNode;
    }
	
    node->NEXT = Delete(node->NEXT, delmonth, delday);
    return node;
}

/* 날짜를 입력해서 할 일 수정하는 노드 */
Node* Edit(Node* node, int month, int day) {
    if (node == NULL) return NULL;
	
    if (node->todo->month == month && node->todo->day == day)
    {   
        char newcontent[100];
        printf("변경할 내용을 입력하세요.");
        scanf("%s", newcontent);
        strcpy(node->todo->content, newcontent);
    }
    node->NEXT = Edit(node->NEXT, month, day);
    return node;
}

/* 할 일 작성하는 함수 */
void ListWrite() {
    int n, i = 0;
    printf("작성할 todo 개수를 입력하세요: ");
    scanf("%d", &n);
    for(i; i < n; i++) {head = Write(head); count ++;}
}

/* 할 일 수정하는 함수 */
void ListEdit() {
    if(count == 0) {printf("조회할 리스트가 존재하지 않습니다. 먼저 리스트를 작성해주세요. \n"); return;}
    int month, day;
    printf("수정할 todo의 날짜를 입력하세요(MMDD): ");
    scanf("%2d%2d", &month, &day);
    head = Edit(head, month, day);
    printf("=================== 수정완료 ===================\n");
}

/* 월을 입력해서 검색  */
void ListSearch() {
    if(count == 0) {printf("조회할 리스트가 존재하지 않습니다. 먼저 리스트를 작성해주세요. \n"); return;}
    int month;
    printf("조회할 달을 입력하세요: ");
    scanf("%d", &month);
    Node* someNode = Search(head,month);
    if(someNode != NULL) {
        printf("\n%d/%d\t %s\t내용:%s\n", someNode->todo->month,someNode->todo->day,someNode->todo->levelsq,someNode->todo->content);
    }
}

/* 할 일을 삭제하는 함수 */
void ListDelete() {
    if(count == 0) {printf("조회할 리스트가 존재하지 않습니다. 먼저 리스트를 작성해주세요. \n"); return;}
    int month, day;
    printf("삭제할 todo의 날짜를 입력하세요(MMDD): ");
    scanf("%2d%2d", &month, &day);
    head = Delete(head, month, day);
    printf("=================== 삭제완료 ===================\n");
    count--;
    }

/* 내용 출력하기 */
void ListPrint(Node* node)                  
{
    if (node == NULL) return;
    printf("\n%d/%d\t %s\t내용:%s\n",node->todo->month, node->todo->day, node->todo->levelsq, node->todo->content);
    ListPrint(node->NEXT);
}

void ListList() {
    if(count == 0) {printf("조회할 리스트가 존재하지 않습니다. 먼저 리스트를 작성해주세요. \n"); return;}
    int opt;
    printf("\n1. 월을 입력해서 조회\n2.전체 조회\n번호를 입력하세요(1,2): ");
    scanf("%d", &opt);
    if(opt == 1) ListSearch();
    else ListPrint(head);
}

void ListExit() {
    printf("프로그램을 종료합니다."); 
    Node * node = head;
    FILE * fp =  fopen("todo.txt", "wt");
    if(fp == NULL) printf("failed to open todo.txt\n"); exit(0);
    while(node != NULL) {
        fprintf("%d/%d\t%s\t%s\n", node->todo->month,node->todo->day,node->todo->levelsq,node->todo->content);
        node = node->NEXT;
    }
    fclose(fp);
    exit(0);
}