// �ǽ�3. Ű���忡�� �Է¹��� ������ ¦��/Ȧ�� �ǰ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int number;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("�Էµ� ������ ¦���Դϴ�. \n");
	else
		printf("�Էµ� ������ Ȧ���Դϴ�. \n");

	return 0;
}