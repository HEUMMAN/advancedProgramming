//������ �Է� �޾� 8����, 10����, 16������ ����ϴ� ���α׷��Դϴ�. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int integer;

	printf("������ �Է����ּ��� : ");
	scanf("%d", &integer);

	if (integer >= 0)
		printf("8���� : %o\n10���� : %d\n16���� : %x\n", integer, integer, integer);
	else
		printf("8���� : -%o\n10���� : %d\n16���� : -%x\n", integer, integer, integer);

}
