//�� ���� �Է¹޾� �ﰢ���� ������ �Ǻ��ϴ� ���α׷��Դϴ�. 

#define _CRT_SECURE_NO_WARNINGS
#define UINT8 int
#include <stdio.h>

int triangular_shape(int a, int b, int c);

int main()
{
	int side_a, side_b, side_c;

	printf("�ﰢ���� ù��° ���� ���̸� �Է����ּ��� : ");
	scanf("%d", &side_a);
	printf("�ﰢ���� �ι�° ���� ���̸� �Է����ּ��� : ");
	scanf("%d", &side_b);
	printf("�ﰢ���� ����° ���� ���̸� �Է����ּ��� : ");
	scanf("%d", &side_c);

	triangular_shape(side_a, side_b, side_c);

	return 0;
}


int triangular_shape(int a, int b, int c)
{
	if (a * a + b * b < c * c || b * b + c * c < a * a || c * c + a * a < b * b)
		printf("�а��ﰢ���Դϴ�.");

	else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
		printf("�����ﰢ���Դϴ�.");

	else
		printf("�����ﰢ���Դϴ�.");

	return 0;
}