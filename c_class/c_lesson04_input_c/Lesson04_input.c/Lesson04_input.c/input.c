//�ǽ�1. Ű���忡�� �Է¹��� ���� �ǰ� �� �� ���(input.c)
// Ű���忡�� �ӷ¹��� ������ ��������� �ǰ����ְ� �� �Էµ� ���� ����� �ִ� ���α׷�.

#define _CRT_SECURE_NO_WARNINGS			//�ݵ�� �� ���ٿ� �־�� ��
#include<stdio.h>


int main(void)
{
	int number;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &number);

	if (number > 0)
		printf("����Դϴ�.\n");
	printf("�Էµ� ���� %d�Դϴ�.\n", number);

	return 0;
}