//연속적인 자연수의 합으로 자연수N을 만들 수 있는 경우의 수를 구하는 프로그램입니댜.
#include<stdio.h>
#define USHORT unsigned short

int main()
{
	USHORT natural_number_N, temp_natural_number_N;
	USHORT minus_number = 1;
	USHORT count = 0;
	USHORT int i = 0;

	printf("자연수 N을 입력해주세요 : ");
	scanf("%hd", &natural_number_N);

	temp_natural_number_N = natural_number_N;
	natural_number_N--;

	while (natural_number_N > 0)
	{
		minus_number++;
		natural_number_N = natural_number_N - minus_number;

		if (natural_number_N % minus_number == 0)
		{
			count++;
			for (i = 1; i < minus_number; i++)
			{
				printf("%hd + ", (natural_number_N / minus_number) + i);
			}
			printf("%hd = %hd\n", ((natural_number_N / minus_number) + i), temp_natural_number_N);
		}

	}
	printf("\n%hd개의 경우의 수가 나옵니다.\n", count);

	return 0;

}