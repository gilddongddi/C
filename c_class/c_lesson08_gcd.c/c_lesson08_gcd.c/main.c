// 최대 공약수 구하기
#include<stdio.h>

int gcd(int x, int y);

int main()
{
    printf("%d\n", gcd(30, 20));
    return 0;
}

int gcd(int x, int y)
{
    if(y == 0)
        return x;
    else return gcd(y, x%y);
}
