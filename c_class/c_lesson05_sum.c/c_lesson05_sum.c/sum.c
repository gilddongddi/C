//실습3. 키보드에서 입력받은 값의 합계를 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int i, n, sum;

	i = 0;
	sum = 0;

	while (i < 5)
	{
		printf("값을 입력하시오: ");
		scanf("%d", &n);
		sum = sum + n;
		i++;
	}
	printf("합계는 %d입니다. \n", sum);

	return 0;
}