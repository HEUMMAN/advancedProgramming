//난수를 맞추면 종료되는 프로그램입니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 


int make_random_number(int lower_limit, int upper_limit);

int main()
{
	int input_number;
	int random_number = make_random_number(1, 100);

	printf("1~100범위의  난수가 발생했습니다.\n");
	//printf("난수는 %d입니다.\n",random_number);

	while (1)
	{
		printf("Input : ");
		scanf("%u", &input_number);

		if (input_number < random_number)
		{
			printf("Up!\n");
		}
		else if (input_number > random_number)
		{
			printf("Down!\n");
		}
		else if (input_number == random_number)
		{
			printf("Correct!\n");
			break;
		}
	}
}

int make_random_number(int lower_limit, int upper_limit)
{
	srand((unsigned)time(0));
	return (int)(rand() % (upper_limit - lower_limit + 1)) + lower_limit;
}