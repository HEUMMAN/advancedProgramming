//�������� �ڿ����� ������ �ڿ���N�� ���� �� �ִ� ����� ���� ���ϴ� ���α׷��Դϴ�.
#include<stdio.h>
#define USHORT unsigned short

int main()
{
	USHORT natural_number_N, temp_natural_number_N;
	USHORT minus_number = 1;
	USHORT count = 0;
	USHORT int i = 0;

	printf("�ڿ��� N�� �Է����ּ��� : ");
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
	printf("\n%hd���� ����� ���� ���ɴϴ�.\n", count);

	return 0;

}