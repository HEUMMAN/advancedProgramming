//���� �Ʒ����� ������ ������ ���� ����� ���� ���ϴ� ���α׷��Դϴ�. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int num);

int main()
{
	int column, row, number_of_cases;

	printf("���� �Է����ּ��� : ");
	scanf("%d", &column);
	printf("���� �Է����ּ��� : ");
	scanf("%d", &row);

	number_of_cases = factorial(column + row) / (factorial(column) * factorial(row));

	printf("����� ���� %d���� �Դϴ�.", number_of_cases);
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