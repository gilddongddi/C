//문자열 이해하기

#include<stdio.h>

#define ASCII_BEGIN 0
#define ASCII_END 255

main()
{
	int i;

	for (i = ASCII_BEGIN; i <= ASCII_END; i++)
	{
		printf("ASCII코드(%3d), 문자='%c' \n", i, i);
		
	}
	
	printf("128~255까지의 한글은 1byte는 표시할 수 없어서 표시가 안 되나 봄");
}