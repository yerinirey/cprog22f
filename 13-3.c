/* 학생정보를 아래의 struct student 에 저장해두고,
해당 struct 를 인자로 넘겨 학생의 점수 (grade) 를 1점 증가시키는
inc_grade 함수를 만드시오.
main 함수에서 inc_grade 를 호출한 후
학생 grade 를 출력하도록 하시오.
inc_grade 의 return type 은 void 임. */
#define STUDENT 3
#include <stdio.h>
#include <string.h>

struct student {
    int number;
    char name[20];
    double grade;
};

struct student list[STUDENT];
int i;

void inc_grade(int n) {
    list[n].grade += 1.0;
    printf("%s의 학점: %.2lf\n",list[n].name, list[n].grade);
}

int main() {
    for(i = 0; i < STUDENT; i++) {
        printf("\n학번을 입력하세요: ");
        scanf("%d", &list[i].number);
        printf("이름을 입력하세요: ");
        scanf("%s", list[i].name);
        printf("학점을 입력하세요: ");
        scanf("%lf", &list[i].grade);
    }

    char getName[20];
    printf("\n학점을 올릴 학생의 이름을 입력하세요:");
    scanf("%s", getName);
    
    for(i = 0; i < STUDENT; i++) {
        if(strcmp(list[i].name, getName)) continue;
        else inc_grade(i);
    }
}