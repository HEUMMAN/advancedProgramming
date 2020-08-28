//ISBN번호를 받아서 올바른 ISBN번호인지 여부를 검사하는 프로그램입니다. 
#include <stdio.h>

int main()
{
	int ISBN_number[13];
	int sum_of_odd_ISBN_number = 0;
	int sum_of_even_ISBN_number = 0;
	int sum_of_ISBN_number = 0;
	printf(" '-' 없이 ISBN 번호 13자리를 입력해주세요 : ");


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

	//printf("ISBN의 번호 합은 %d입니다.\n",sum_of_ISBN_number);

	if (sum_of_ISBN_number % 10 == 0)
	{
		printf("유효한 ISBN번호입니다.");
	}
	else
		printf("유요하지 않은 ISBN번호입니다.");
}