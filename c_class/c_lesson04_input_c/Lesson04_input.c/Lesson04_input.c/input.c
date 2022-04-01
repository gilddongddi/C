//실습1. 키보드에서 입력받은 정수 판결 및 값 출력(input.c)
// 키보드에서 임력받은 정수가 양수인지를 판결해주고 그 입력된 값을 출력해 주는 프로그램.

#define _CRT_SECURE_NO_WARNINGS			//반드시 맨 윗줄에 있어야 함
#include<stdio.h>


int main(void)
{
	int number;

	printf("정수를 입력하시오: ");
	scanf("%d", &number);

	if (number > 0)
		printf("양수입니다.\n");
	printf("입력된 값은 %d입니다.\n", number);

	return 0;
}