//ISBN��ȣ�� �޾Ƽ� �ùٸ� ISBN��ȣ���� ���θ� �˻��ϴ� ���α׷��Դϴ�. 
#include <stdio.h>

int main()
{
	int ISBN_number[13];
	int sum_of_odd_ISBN_number = 0;
	int sum_of_even_ISBN_number = 0;
	int sum_of_ISBN_number = 0;
	printf(" '-' ���� ISBN ��ȣ 13�ڸ��� �Է����ּ��� : ");


	for (int i = 0; i < 13; i++)
	{
		scanf("%1d", &ISBN_number[i]);
	}

	for (int j = 0; j < 7; j++)
	{
		sum_of_odd_ISBN_number = sum_of_odd_ISBN_number + ISBN_number[(2 * j) + 1];

	}

	for (int k = 0; k < 6; k++)
	{
		sum_of_even_ISBN_number = sum_of_even_ISBN_number + (3 * ISBN_number[(2 * k) + 2]);
	}

	sum_of_ISBN_number = sum_of_odd_ISBN_number + sum_of_even_ISBN_number;

	//printf("ISBN�� ��ȣ ���� %d�Դϴ�.\n",sum_of_ISBN_number);

	if (sum_of_ISBN_number % 10 == 0)
	{
		printf("��ȿ�� ISBN��ȣ�Դϴ�.");
	}
	else
		printf("�������� ���� ISBN��ȣ�Դϴ�.");
}