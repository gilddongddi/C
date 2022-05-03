/*배열을 정의하고 초기값을 이용해 배열 요소의 값들을 초기화한 후에
배열 요소들을 출력하는 프로그램을 작성하시오.*/

#include<stdio.h>

int main()
{
    int scores[5] = {31, 63, 62, 87, 14};
    
    for(int i=0;i<5;i++)
    {
        printf("scores[%d] = %d\n", i, scores[i]);
    }
    
    // 배열의 복사
    int scores2[5];
    
    for(int i=0;i<5;i++){
        scores2[i] = scores[i];
        printf("scores2[%d] = %d\n", i, scores2[i]);
    }
 
}
