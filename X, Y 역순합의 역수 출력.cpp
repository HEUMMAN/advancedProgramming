//X�� Y�� ������ ���Ͽ� �� ������ ����ϴ� �Լ��Դϴ�.
#include<stdio.h>
#define USHORT unsigned short
#define MAX 1000

int reverse_number(int input_number);

int main()
{
	USHORT X, Y, rev_XY, rev_rev_XY;

	printf("1000������ �ڿ��� X�� �Է����ּ��� : ");
	scanf("%hd", &X);
	printf("1000������ �ڿ��� Y�� �Է����ּ��� : ");
	scanf("%hd", &Y);

	rev_XY = reverse_number(X) + reverse_number(Y);
	rev_rev_XY = reverse_number(rev_XY);
	printf("%hd", rev_rev_XY);
}

int reverse_number(int input_number)
{
	int temp_input_number = 0;

	while (input_number)
	{
		temp_input_number = (temp_input_number * 10) + (input_number % 10);
		input_number = input_number / 10;
	}

	return temp_input_number;
}