//printf() 함수 100% 활용하기

#include <stdio.h>

void main(void)
{
	int i;
	char* pi;
	char* string = "books";

	//문자, 정수값
	printf("[%c]\n", 'A');		//[A]
	printf("[%d]\n", 7);		//[7]
	printf("[%i]\n", 7);		//[7]		v
	printf("[%5d]\n", 7);		//[    7]
	printf("[%05d]\n", 7);		//[00007]
	printf("[%+d]\n", -12345);	//[-12345]
	printf("[%+d]\n", 12345);	//[+12345]
	printf("[%d]\n", -12345);	//[-12345]
	printf("[%u]\n", 12345);	//[12345]
	printf("[%u]\n", -12345);	//[4294954951] v
	printf("\n");

	//8진수, 16진수
	printf("[%x]\n", 0xFF);		//[ff]
	printf("[%X]\n", 0xFF);		//[FF]
	printf("[%#x]\n", 0xFF);	//[0xff]
	printf("[%#x]\n", 12345);	//[0x3039]
	printf("[%o]\n", 0123);		//[123]
	printf("[%#o]\n", 0123);	//[0123]
	printf("\n");

	//고정 소수점

}