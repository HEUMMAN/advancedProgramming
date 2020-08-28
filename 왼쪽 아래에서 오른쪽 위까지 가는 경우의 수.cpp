//왼쪽 아래에서 오른쪽 위까지 가는 경우의 수를 구하는 프로그램입니다. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int num);

int main()
{
	int column, row, number_of_cases;

	printf("열을 입력해주세요 : ");
	scanf("%d", &column);
	printf("행을 입력해주세요 : ");
	scanf("%d", &row);

	number_of_cases = factorial(column + row) / (factorial(column) * factorial(row));

	printf("경우의 수는 %d가지 입니다.", number_of_cases);
	return 0;
}

int factorial(int num)
{
	int result = 1;

	for (int i = 1; i <= num; i++)
	{
		result = result * i;
	}
	return result;
}