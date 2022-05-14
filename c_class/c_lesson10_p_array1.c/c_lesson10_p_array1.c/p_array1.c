// 실습1. 포인터와 배열의 관계1

#include<stdio.h>

int a[] = {1,2,3};

int main(void)
{
    printf("&a[0] = %p\n", &a[0]);
    printf("&a[1] = %p\n", &a[1]);
    printf("&a[2] = %p\n", &a[2]);
    printf("a = %p\n", a);
    
    return 0;
}
