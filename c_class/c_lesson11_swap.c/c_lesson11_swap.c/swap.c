// 실습1. 두 변수에 값을 저장시키고 참조에 의한 호출에 의해 두 변수의 값 교환
#include<stdio.h>

void swap(int *px, int *py);    // 매개변수로 주소값을 넣어라. &x, &y 식으로 넣어도 됨

int main(void)
{
    int a = 100;
    int b = 200;
    printf("swap() 호출 전 a = %d b = %d\n", a, b);
    
    
    swap(&a, &b);
    printf("swap() 호출 후 a = %d b = %d\n", a, b);

    return 0;
}

void swap(int *px, int *py)
{
    int tmp;
    tmp = *px;
    *px = *py;
    *py = tmp;
}
