#include <stdio.h>
int cnt = 0;
void hanoi_tower(int n, char from, char tmp, char to) {

    if(n == 1) {
        printf("원판 1을 %c에서 %c로 옮긴다.\n", from, to);
        cnt++;
    }
    else {
        hanoi_tower(n-1, from, to, tmp);
        printf("원판 %d을 %c에서 %c로 옮긴다.\n", n, from, to);
        hanoi_tower(n-1, tmp, from, to);
        cnt++;
    }
}

int main() {
    hanoi_tower(5, 'A', 'B', 'C');
    printf("%d번 옮겼습니다.", cnt);
    return 0;
}