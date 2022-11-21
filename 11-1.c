/* int 타입의 변수 x 를 선언하고 10을 저장한다. 해당 정수의 값과 주소값을 각각 출력해 보시오.
또한 int* 타입의 변수 p를 선언하고 p가 가리키는 곳의 값을 출력했을 때 x의 값이 출력되도록 코드를 만드시오. 
$ ./pointer 
x = 10 
x address = 0x4052B 
p = 0x21423 
p value = 10 
*/
#include <stdio.h>
int main() {
    int x = 10;
    int * p;
    p = &x;
    printf("x = %d\n", x);
    printf("x address = %p\n", &x);
    printf("p = %p\n", p);
    printf("p value = %d\n", *p);

    return 0;
}

