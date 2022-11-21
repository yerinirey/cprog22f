/* Strchr를 활용하여 문자열 language 전체에서
‘g’가 나온 부분을 모두 출력하는 프로그램을 만드시오.
힌트: 문자열의 길이를 찾는 함수는 strlen 인데 문자열을 인자로 받아
그 길이를 int 타입으로 return 해 줌.   

실행화면
Found at 3 
Found at 6 
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "language";
    char c = 'g';
    char * p;
    int loc = 0;
    int len = strlen(s);

    p = strchr(s, c);

    while(p != NULL) { 
        loc = (int)(p - s);
        if(p != NULL) printf("Found at %d\n", loc);
        p = strchr(p + 1, c);
    }
}