#include<stdio.h>

//void modify(int value)
//{
//    value = 99;
//}
//
//int main(void)
//{
//    int number =1;
//    modify(number);
//    printf("number = %d\n", number);
//
//    return 0;
//}

//void modify(int* ptr)
//{
//    *ptr=99;        // 매개 변수를 통하여 원본을 변경한다.
//}
//
//int main(void)
//{
//    int number = 1;
//
//    modify(&number);        // 주소를 계산해서 보낸다
//    printf("number= %d\n", number);
//
//    return 0;
//
//}


//void main()
//{
//    int i = 10;
//    int * pi;
//    pi= &i;
//
//    printf("i = %d, i의 주소 = %p\n", i, pi);


//void swap(int x, int y)
//{
//    int tmp;
//
//    tmp = x;
//    x = y;
//    y = tmp;
//}
//
//int main(void)
//{
//    int a = 10, b = 20;
//    swap(a,b);
//    printf("swap() 호출 후 a=%d b = %d\n", a, b);
//}
            // 기본적으로 값에 의한 호출이 원칙이기 때문에 함수에서는 변경됐지만, 실행시에는 변경되지 않는다.

//void swap(int *x, int *y)
//{
//    int tmp;
//
//    tmp=*x;
//    *x=*y;
//    *y=tmp;
//}
//
//int main(void)
//{
//    int a = 100, b = 200;
//    printf("swap() 호출전 a=%d b=%d\n", a, b);
//    swap(&a, &b);
//
//    printf("swap() 호출후 a=%d b=%d\n", a, b);
//    return 0;
//}
//
//// c언어에서는 기본적으로 값에 의한 호출을 해야 한다. 그러나 함수가 외부에서 선언되어 있다면 포인터를 이용한 주소에 의한 호출을 해야 한다.


// 포인터와 배열의 관계

//int main(void)
//{
//    int a[] = {10,20,30,40,50};
//
//    printf("&a[0] = %p\n", &a[0]);
//
//    printf("a = %p\n", a);
//
//    return 0;
//}


//int main(void)
//{
//    int a[] = {10,20,30,40,50};
//    int *p;
//
//    p = a;
//    printf("a[0]=%d a[1]=%d a[2]=%d\n", a[0],a[1],a[2]);
//    printf("p[0]=%d p[1]=%d p[2]=%d\n", p[0],p[1],p[2]);
//
//    p[0]= 60;
//    p[1]=70;
//    p[2] = 80;
//
//    printf("a[0]=%d a[1]=%d a[2]=%d\n", a[0],a[1],a[2]);
//    printf("p[0]=%d p[1]=%d p[2]=%d\n", p[0],p[1],p[2]);
//
//    return 0;
//}

//배열 매개 변수

//void sub(int*ptr)
//{
//    printf("%d\n", ptr[10]);
//}
//
//int main(void)
//{
//    int large_data[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//    sub(large_data);
//
//    return 0;
//}

// 배열 매개 변수는 포인터로 생각하고 있음

void sub(int b[], int n);
int main(void)
{
    int a[3] = {1,2,3};
    
    printf("%d %d %d \n", a[0], a[1], a[2]);
    sub(a,3);
    printf("%d %d %d \n", a[0], a[1], a[2]);
    
    return 0;
}

void sub(int b[], int n)
{
    b[0] = 4;
    b[1] = 5;
    b[2] = 6;
}
