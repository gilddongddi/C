#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>


void gugu() {
    int ans2;
    int ans3;
    int a, b;
    char ans4;
LEVEL1:
    system("cls");
    printf("----------------------------------------------\n");
    printf("                                             \n");
    printf("   �����ܰ����� �����մϴ�                          \n");
    printf("   ���Ͻô� �������� �����ּ���(2~9999 / 1�� ����) :   \n");
    printf("   (�� ������ 5������ �����˴ϴ�.                    \n");
    printf("                                             \n");
    printf("----------------------------------------------\n");
    printf(" �� ��?(����:0) : ");
    scanf(" %d", &ans2);

    if (ans2 == 1)
    {
    LEVEL2:
        for (int i = 0; i < 5; i++)
        {
            system("cls");
            a = rand() % 10000;
            b = rand() % 10000;
            printf("<����>\n");
            printf(" %d x %d = ? : ", a, b);
            scanf("%d", &ans3);

            if (ans3 == (a * b))
            {
                printf("�����Դϴ�!\n");
                Sleep(500);
            }
            else
            {
                printf("Ʋ�Ⱦ�� �Ф� ��\n");
                Sleep(500);
            }

        }
        printf("\n");
        printf(" �ٽ� �ϱ� -> r\n");
        printf(" �� �ܰ�� ���� -> p\n");
        printf(" ���� �����ϱ� -> q\n");
        scanf(" %c", &ans4);
        if (ans4 == 'r')
            goto LEVEL2;
        else if (ans4 == 'p')
            goto LEVEL1;
        else
        {
            printf(" ������ �����մϴ�. ByeBye~~\n");
            printf("\n");
        }

    }
    else if (ans2 == 0)
        return 0;
    else
    {
    LEVEL3:
        for (int i = 0; i < 5; i++)
        {
            system("cls");
            a = ans2;
            b = rand() % 10000;
            printf("<����>\n");
            printf(" %d x %d = ? : ", a, b);
            scanf("%d", &ans3);

            if (ans3 == (a * b))
            {
                printf("�����Դϴ�!\n");
                Sleep(500);
            }
                
            else
            {
                printf("Ʋ�Ⱦ�� �Ф� ��\n");
                Sleep(500);
            }
        }
        printf("\n");
        printf(" �ٽ� �ϱ� -> r\n");
        printf(" �� �ܰ�� ���� -> p\n");
        printf(" ���� �����ϱ� -> q\n");
        scanf(" %c", &ans4);
        if (ans4 == 'r')
            goto LEVEL3;
        else if (ans4 == 'p')
            goto LEVEL1;
        else
        {
            printf(" ������ �����մϴ�. ByeBye~~\n");
            printf("\n");
        }

    }


}


int main(void)
{
    printf("----------------------------------------------\n");
    printf("\n");
    printf("        ��ȣ!! �ų��� ������ ����~~~~^��^///        \n");
    printf("\n");
    printf("----------------------------------------------\n");
    printf("\n");
    printf(" ������ �����Ϸ��� ���� 1�� ��������(�ٸ� ��ư�� ����) : ");
    char ans1;
    scanf(" %c", &ans1);

    if (ans1 == '1') {

        printf(" ���� START!!\n");
        Sleep(500);

    }

    else
    {
        printf("���α׷��� �����մϴ�. \n");
        printf("\n");
        return 0;
    }

    gugu();


}
