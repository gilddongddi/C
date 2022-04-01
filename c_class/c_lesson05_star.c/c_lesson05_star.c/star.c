//실습5. 중첩 for문을 이용해서 *출력하기

#include<stdio.h>

int main(void)
{
	int x, y;
	for (y = 1; y <= 5; y++)
	{
		for (x = 0; x < y; x++)
			printf("*");
		printf("\n");
	}
}