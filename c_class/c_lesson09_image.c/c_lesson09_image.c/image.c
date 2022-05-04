// 2차원 배열에 흑백 영상을 저장하고 이 배열을 받아서 영상의 색상을 반전하는 함수
// inverse()를 작성하시오.

#include<stdio.h>

void display(int image[8][16])
{
    for(int r = 0; r<8;r++){
        for(int c = 0;c<16;c++){
            if(image[r][c] == 0)
                printf("*");
            else
                printf("_");
        }
        printf("\n");
    }
}

void inverse(int img[8][16])
{
    for(int r = 0; r<8;r++){
        for(int c = 0; c<16;c++){
            if(img[r][c] == 0)
                img[r][c] = 1;
            else
                img[r][c] = 0;
        }
    }
}

int main(void)
{
    int image[8][16] = {
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,0,0,0,1,1,0,0,1,1,1,1,1,1},
        {1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
    printf("변환전이미지\n");
    display(image);
    inverse(image);
    printf("\n\n변환후이미지\n");
    display(image);
    return  0;
    
}
