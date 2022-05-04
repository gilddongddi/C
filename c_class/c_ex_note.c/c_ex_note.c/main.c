#include<stdio.h>

int main(void)
{
    int num = 100;
    const int *ptr = &num;
    printf("*ptr: %d\n", *ptr);
    
//    *ptr = 200;  오류발생 *ptr을 상수로 지정했기에 변경할 수 없음
    return 0;
}
