//실습2. 나머지 연산자

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int input, min, sec;

	printf("초를 입력하시오 : ");
	scanf("%d", &input);

	min = input / 60;
	sec = input % 60;

	printf("%d초는 %d분 %d초 입니다.\n", input, min, sec);
	
	return 0;


}