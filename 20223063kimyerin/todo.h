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
int count;      // 총 리스트 개수
/* select.c */
void SelectMenu(int opt);   // 메뉴를 출력하고 선택하는 함수
void SelectSort();          // 정렬 방법을 선택하는 함수

/* list.c */
Node* Write(Node* node);                
Node* Search(Node* node, int month);    
Node* Delete(Node* node, int delmonth, int delday);
void ListWrite();
void ListSearch();          // 월로 검색
void ListDelete();          // 할 일 삭제
void ListPrint(Node * List);

/* sort.c */
void SortbyDate();          // 날짜 순으로 정렬
void SortbyLevel();         // 중요도 순으로 정렬

/* search.c */

#endif