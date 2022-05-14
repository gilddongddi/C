#include<stdio.h>

int main(void)
{
    int i = 10;
    int* pi = &i;
    
    printf("i = %d, pi = %p\n", i, pi);
    
//    *pi = 11;
    (*pi)++;
    printf("i = %d, pi = %p\n", i, pi);
    printf("i = %d, pi = %p\n", *pi, pi);
    
    *pi++;
    printf("i = %d, pi = %p\n", i, pi);
    printf("i = %d, pi = %p\n", *pi, pi);
    
}
