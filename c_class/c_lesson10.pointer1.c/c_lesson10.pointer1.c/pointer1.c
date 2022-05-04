// 포인터를 선언하고 변수의 주소를 포인터에 대입
#include<stdio.h>

//int main()
//{
//    int var1 = 10;
//    int var2 = 20;
//    int *p1;
//    int *p2;
//    p1 = &var1;
//    p2 = &var2;
//
//    printf("%d %d\n", p1, &var1);
//    printf("%d %d\n", p2, &var2);
//
//    return 0;
//}

int main()
{
    int i = 10;
    double f = 12.3;
    int* pi = NULL;
    double* pf = NULL;
    
    pi = &i;
    pf = &f;
    
    printf("%p %p\n", pi, &i);
    printf("%p %p\n", pf, &f);
}
