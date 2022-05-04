//  변수와 포인터를 연결한 후에 변수의 주소와 포인터의 값을 출력하는 프로그램을 작성하시오.
#include<stdio.h>

int main(void)
{
    int i = 3000;
    int * p;    // int* p = NULL;
    p = &i;
    
    printf("i = %d\n", i);
    printf("&i = %p\n", &i);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
    
    return 0;
}
