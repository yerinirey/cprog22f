/* 1번 문제에서 재고 변수를 static 지정자를 활용하여 수정하여 보시오.
Dec / inc 함수를 따로 만들지 말고 update 라고 함수를 하나 만들어서
변경 수량을 입력하도록 하고, 재고 변수는 static 으로 관리.
print_stat 함수는 빈 함수로 둘 것.  증감 여부는 n의 부호를 활용하면 됨. */

#include <stdio.h>
int update(int n) {
    static int item = 100;
    
    item += n;
    if(n >= 0) { printf("%d개를 판매했습니다 \n", n);}
    else ("%d개를 입고했습니다 \n", -n);
    printf("%d\n", item); // 재고 확인용
    return 0;
}

int print_item() {

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
                update(n);
                break; 
            case 2: 
                update(n);
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
