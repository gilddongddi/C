#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void gugu(){
    int ans2;
    int ans3;
    int a, b;
    char ans4;
LEVEL1:
    system("clear");
    printf("----------------------------------------------\n");
    printf("                                             \n");
    printf("   구구단게임을 시작합니다                          \n");
    printf("   원하시는 구구단을 눌러주세요(2~9999 / 1은 랜덤) :   \n");
    printf("   (매 게임은 5문제씩 출제됩니다.                    \n");
    printf("                                             \n");
    printf("----------------------------------------------\n");
    printf(" 몇 단? : ");
    scanf(" %d", &ans2);
    
    if(ans2 == 1)
    {
    LEVEL2:
        for(int i=0;i<5;i++)
        {
            system("clear");
            a = rand()%10000;
            b = rand()%10000;
            printf("<문제>\n");
            printf(" %d x %d = ? : ", a, b);
            scanf(" %d", &ans3);
                
            if(ans3 == (a*b))
                printf("정답입니다!\n");
            else
                printf("틀렸어요 ㅠㅅ ㅠ\n");
            
            
        }
        printf("\n");
        printf(" 다시 하기 -> r\n");
        printf(" 전 단계로 가기 -> p\n");
        printf(" 게임 종료하기 -> q\n");
        scanf(" %c", &ans4);
        if(ans4 == 'r')
            goto LEVEL2;
        else if(ans4 == 'p')
            goto LEVEL1;
        else
        {
            printf(" 게임을 종료합니다. ByeBye~~\n");
            printf("\n");
        }
        
    }
    else
    {
    LEVEL3:
        for(int i=0;i<5;i++)
        {
            system("clear");
            a = ans2;
            b = rand()%10000;
            printf("<문제>\n");
            printf(" %d x %d = ? : ", a, b);
            scanf(" %d", &ans3);
                
            if(ans3 == (a*b))
                printf("정답입니다!\n");
            else
                printf("틀렸어요 ㅠㅅ ㅠ\n");
        }
        printf("\n");
        printf(" 다시 하기 -> r\n");
        printf(" 전 단계로 가기 -> p\n");
        printf(" 게임 종료하기 -> q\n");
        scanf(" %c", &ans4);
        if(ans4 == 'r')
            goto LEVEL3;
        else if(ans4 == 'p')
            goto LEVEL1;
        else
        {
            printf(" 게임을 종료합니다. ByeBye~~\n");
            printf("\n");
        }
        
    }
    
    
}


int main(void)
{
    printf("----------------------------------------------\n");
    printf("\n");
    printf("        야호!! 신나는 구구단 게임~~~~^ㅇ^///]        \n");
    printf("\n");
    printf("----------------------------------------------\n");
    printf("\n");
    printf(" 게임을 시작하려면 숫자 1을 누르세요(다른 버튼은 종료) : ");
    char ans1;
    scanf(" %c", &ans1);
    
    if(ans1 == '1'){
        
        printf(" 게임 START!!\n");
        
    }
    
    else
    {
        printf("프로그램을 종료합니다. \n");
        printf("\n");
        return 0;
    }
    
    gugu();
    
    
}
