//�ǽ�2. ������ ������

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int input, min, sec;

	printf("�ʸ� �Է��Ͻÿ� : ");
	scanf("%d", &input);

	min = input / 60;
	sec = input % 60;

	printf("%d�ʴ� %d�� %d�� �Դϴ�.\n", input, min, sec);
	
	return 0;


}