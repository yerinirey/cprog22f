#ifndef TODO_H
#define TODO_H


typedef struct Todo {
    int month;          // 월
    int day;            // 일
    int levelnum;       // 중요도 (숫자)
    char levelsq[100];   // 중요도 (네모)
    char content[100];    // 내용
}Todo;

typedef struct Node
{   
    Todo* todo;
    struct Node* NEXT;
}Node;

Node* head;
int count;      // 총 작성된 리스트 수

/* select.c */
void SelectMenu(int opt);   // 메뉴를 출력하고 선택하는 함수
void SelectSort();          // 정렬 방법을 선택하는 함수

/* list.c */
Node* Write(Node* node);                // 할 일을 작성하는 함수
Node* Search(Node* node, int month);    // 월을 입력해서 검색
Node* Delete(Node* node, int delmonth, int delday);
void ListWrite();
void ListSearch();
void ListDelete();          // 할 일을 삭제하는 함수
void ListPrint(Node * List);

/* sort.c */
void SortbyDate();          // 날짜 순으로 정렬하는 함수
void SortbyLevel();         // 중요도 순으로 정렬하는 함수

/* search.c */

#endif