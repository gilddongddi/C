//실습5. 학점 출력 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int score;

	printf("성적을 입력하시오.: ");
	scanf("%d", &score);

	if (score >= 90)
		printf("A학점 \n");
	else if (score >= 80)
		printf("B학점 \n");
	else if (score >= 70)
		printf("C학점 \n");
	else if (score >= 60)
		printf("D학점 \n");
	else
		printf("F학점 \n");
	return 0;
}