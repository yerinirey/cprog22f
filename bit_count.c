#include <stdio.h>
#define BITS_PER_BYTE 8

int main()
{
    int bit_num = sizeof(unsigned int) * BITS_PER_BYTE;
    int i;
    unsigned int num;
    int add = 0;
    
    printf("숫자를 입력해주세요 = ");
    scanf("%u", &num);
    unsigned int mask = 1;



    for(i = 0; i < bit_num; i++) {
        (num & mask) ?  add++: add;
        mask = mask << 1;
    }
    printf("%d\n", add);
    return 0;
}