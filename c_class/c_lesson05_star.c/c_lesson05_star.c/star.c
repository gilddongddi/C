//�ǽ�5. ��ø for���� �̿��ؼ� *����ϱ�

#include<stdio.h>

int main(void)
{
	int x, y;
	for (y = 1; y <= 5; y++)
	{
		for (x = 0; x < y; x++)
			printf("*");
		printf("\n");
	}
}