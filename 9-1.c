#include <stdio.h>

int item = 100;

int dec_item(int a) {
    item = item - a;
}
int inc_item(int a) {
    item = item + a;
}
int print_item() {
    printf("현재 남은 수량은 %d개 입니다. \n", item);
}

int main() {
    int opt, n; 

    while(1) {
        printf("판매: 1, 입고: 2, 재고확인: 3, 종료 4\n"); 
        scanf("%d", &opt); 

        if  (opt < 3 && opt > 0) {
            printf("수량을 입력하시오\n"); 
            scanf("%d", &n); 
        }
        switch (opt) {
            case 1: 
                dec_item(n); 
                break; 
            case 2: 
                inc_item(n); 
                break; 
            case 3: 
                print_item();
                break; 
            case 4: 
                goto out; 
            default: 
                printf("잘못 선택함 \n");
        }
    }
    out: 
        return 0; 
}
