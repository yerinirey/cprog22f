typedef struct Todo {
    int month;          // 월
    int day;            // 일
    int levelnum;       // 중요도 (숫자)
    char levelsq[30];   // 중요도 (네모)
    char content[50];   // 내용
}Todo;

Todo * todo;
int count;      // 총 작성된 리스트 수

/* select.c */
void SelectMenu(int opt);   // 메뉴를 출력하고 선택하는 함수
void SelectSort();          // 정렬 방법을 선택하는 함수

/* list.c */
void ListWrite();           // 할 일을 작성하는 함수
void ListEdit();            // 할 일을 수정하는 함수
void ListDelete();          // 할 일을 삭제하는 함수

/* sort.c */
void SortbyDate();          // 날짜 순으로 정렬하는 함수
void SortbyLevel();         // 중요도 순으로 정렬하는 함수

/* search.c */