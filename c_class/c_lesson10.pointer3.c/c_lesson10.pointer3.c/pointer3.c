// 다른 변수의 주소를 포인터에 저장해서 포인터의 값 변경
#include<stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int* p = NULL;
    p = &a;
    
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
    
    p = &b;
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
    
    return 0;
}
