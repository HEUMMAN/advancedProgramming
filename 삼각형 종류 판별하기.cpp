//세 변을 입력받아 삼각형의 종류를 판별하는 프로그램입니다. 

#define _CRT_SECURE_NO_WARNINGS
#define UINT8 int
#include <stdio.h>

int triangular_shape(int a, int b, int c);

int main()
{
	int side_a, side_b, side_c;

	printf("삼각형의 첫번째 변의 길이를 입력해주세요 : ");
	scanf("%d", &side_a);
	printf("삼각형의 두번째 변의 길이를 입력해주세요 : ");
	scanf("%d", &side_b);
	printf("삼각형의 세번째 변의 길이를 입력해주세요 : ");
	scanf("%d", &side_c);

	triangular_shape(side_a, side_b, side_c);

	return 0;
}


int triangular_shape(int a, int b, int c)
{
	if (a * a + b * b < c * c || b * b + c * c < a * a || c * c + a * a < b * b)
		printf("둔각삼각형입니다.");

	else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
		printf("직각삼각형입니다.");

	else
		printf("예각삼각형입니다.");

	return 0;
}