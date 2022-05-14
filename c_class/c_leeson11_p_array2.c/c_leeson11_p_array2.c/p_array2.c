#include<stdio.h>

int a[] = {1,2,3,4,5};

int main(void){
    printf("a = %p\n", a);
    printf("a+1 = %p\n", a+1);
    
    printf("*a = %d\n", *a);            // == a[0]
    printf("*(a+1) = %d\n", *(a+1));    // == a[1]
    
    return 0;
}
