// 배열을 이용하여 간단한 극장 예약 시스템을 작성하시오.
// 단, 좌석은 10개, 예약 완료 좌석은 1, 예약이 안된 좌석은 0으로 나타남

#define _CRT_SECURE_NO_WANRINGS
#include<stdio.h>
#define SIZE 10
int main(void)
{
    char ans1;
    int ans2, i;
    int seats[SIZE] = {0};
    while(1)
    {
        printf("좌석을 예약하시겠습니까? (y 또는 n) ");
        scanf(" %c", &ans1);
        if(ans1 == 'y')
        {
            printf("-------------------------------------\n");
            printf("1 2 3 4 5 6 7 8 9 10\n");
            printf("-------------------------------------\n");
            for(i=0;i<SIZE;i++)
                printf("%d ", seats[i]);
            printf("\n");
            printf("몇번째 좌석을 예약하시겠습니까?");
            scanf("%d", &ans2);
        }
        if(ans1 == 'n')
            break;
        if(ans2 <=0 || ans2 > SIZE){
            printf("1부터 10 사이의 숫자를 입력하세요.\n");
            continue;
        }
        if(seats[ans2-1]==0){
            seats[ans2-1] = 1;
            printf("예약되었습니다.\n");
        }
        else
            printf("이미 예약된 자리입니다.");
    }
    return 0;
}


//
//char reservation;
//
//int main()
//{
//    for(;;)
//    {
//
//        printf("좌석을 예약하시겠습니까? (y 또는 n) : ");
//        scanf("%c", &reservation);
//        static int seats[10];
//        int seat[10];
//        for(int i=0;i<10;i++)
//        {
//            seats[i] = 0;
//
//
//        }
//        if(reservation == 'y')
//        {
//
//            printf("--------------------------------\n");
//            printf("1 2 3 4 5 6 7 8 9 10");
//            printf("\n");
//            printf("--------------------------------\n");
//
//            for(int i=0;i<10;i++)
//            {
//                printf("%d ", seats[i]);
//            }
//            printf("\n");
//
//
//            printf("몇번째 좌석을 예약하시겠습니까?");
//            int seat_number;
//            scanf("%d", &seat_number);
//
//            if(seats[seat_number-1] == 1)
//                printf("이미 예약된 자리입니다. 다른 좌석을 선택하세요.");
//            if(seats[seat_number-1] == 0)
//                {
//                    seats[seat_number-1] = 1;
//                    printf("예약되었습니다.");
//
//                }
//            else
//                printf("잘못 입력했습니다.\n");
//            continue;
//        if(reservation == 'n')
//            return 0;
//
//
//     }
//}
//}
//
