//�ǽ�6. �ҹ��ڸ� �빮�ڷ� �����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	char letter;
	while (1)
	{
		printf("�ҹ��ڸ� �Է��Ͻÿ�: ");
		scanf(" %c", &letter);			//���鹮�ڸ� ���ܽ�Ű�� ���� ��į��

		if (letter == 'Q')
			break;
		if (letter < 'a' || letter>'z')
			continue;

		letter -= 32;
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�. \n", letter);
	}
	return 0;
}