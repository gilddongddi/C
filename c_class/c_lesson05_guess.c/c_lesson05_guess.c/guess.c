#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int answer = 59;	//정답
	int guess;
	int tries = 0;

	do {
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		tries++;
		if (guess > answer)
			printf("제시한 정수가 높습니다.");
		if (guess < answer)
			printf("제시한 정수가 낮습니다.");
		
	} while (guess != answer);
	printf("축하합니다. 정답이에요. 시도횟수 = %d", tries);
	return 0;
}