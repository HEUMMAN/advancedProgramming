//정수를 입력 받아 8진수, 10진수, 16진수를 출력하는 프로그램입니다. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int integer;

	printf("정수를 입력해주세요 : ");
	scanf("%d", &integer);

	if (integer >= 0)
		printf("8진수 : %o\n10진수 : %d\n16진수 : %x\n", integer, integer, integer);
	else
		printf("8진수 : -%o\n10진수 : %d\n16진수 : -%x\n", integer, integer, integer);

}
