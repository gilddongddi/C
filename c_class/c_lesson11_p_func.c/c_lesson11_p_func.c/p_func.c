// 포인터와 함수의 관계

#include<stdio.h>

void p_func(int b[]);

int main(void)
{
    int a[]= {1,2,3};
    printf("%d %d %d\n", a[0], a[1], a[2]);
    p_func(a);
    printf("%d %d %d\n", a[0], a[1], a[2]);
                         
}

void p_func(int b[])
{
    b[0] = 4;
    b[1] = 5;
    b[2] = 6;
}
