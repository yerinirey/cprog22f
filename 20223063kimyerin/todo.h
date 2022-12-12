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
void SelectMenu(int opt);   

/* list.c */
Node* Write(Node* node);                
Node* Search(Node* node, int month);    
Node* Delete(Node* node, int delmonth, int delday);
Node* Edit(Node* node, int month, int day);
void ListWrite();
void ListEdit();
void ListSearch();          
void ListDelete();          
void ListPrint(Node * List);
void ListList();
void ListExit();

#endif