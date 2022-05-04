// 포인터의 증감 연산에 대한 프로그램을 작성하시오.

#include<stdio.h>

int main(void)
{
    int i = 10;
    int* pi;
    pi = &i;
    
    printf("i = %d, pi = %p\n", i, pi);
    
    (*pi)++;
    printf("i = %d, pi = %p\n", i, pi);
    printf("i = %d, pi = %p\n", i, pi);
    
    *pi++;
    printf("i = %d, pi = %p\n", i, pi);
    
    return 0;
}
