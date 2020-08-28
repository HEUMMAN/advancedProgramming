//X와 Y의 역순을 더하여 그 역순을 출력하는 함수입니다.
#include<stdio.h>
#define USHORT unsigned short
#define MAX 1000

int reverse_number(int input_number);

int main()
{
	USHORT X, Y, rev_XY, rev_rev_XY;

	printf("1000이하의 자연수 X를 입력해주세요 : ");
	scanf("%hd", &X);
	printf("1000이하의 자연수 Y를 입력해주세요 : ");
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