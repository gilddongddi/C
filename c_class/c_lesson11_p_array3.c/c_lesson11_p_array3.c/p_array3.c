//실습4. 포인터와 배열의 관계3

#include<stdio.h>

int main(void)
{
    int a[] = {10,20,30,40,50};
    printf("a[0] = %d a[1] = %d a[3] = %d\n", a[0], a[1], a[2]);
    
    int* p =NULL;
    p = a;
    printf("p[0] = %d p[1] = %d p[3] = %d\n", p[0], p[1], p[2]);
    
    return 0;
}
