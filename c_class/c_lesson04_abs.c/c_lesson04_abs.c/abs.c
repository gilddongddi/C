//�ǽ�2. Ű���忡�� �Է¹��� ������ ���밪 ���(abs.c)

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int number;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &number);

	if (number < 0)
		number = -number;

	printf("���밪�� %d�Դϴ�. \n", number);

	return 0;

	
}