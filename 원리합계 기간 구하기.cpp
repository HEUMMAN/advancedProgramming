//�����հ� �Ⱓ�� �����ִ� ���α׷��Դϴ�. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int money, goal, interest, sum, year;

	printf("�ʱ� �Աݾ��� �Է����ּ��� : ");
	scanf("%d", &money);
	printf("��ǥ �ݾ��� �Է����ּ��� : ");
	scanf("%d", &goal);
	printf("������(%%)�� �Է����ּ��� : ");
	scanf("%d", &interest);

	for (year = 0; sum <= goal; year++)
	{
		sum = money * (pow((1 + (interest * 0.01)), year));
	}
	year = year - 1;

	printf("��ǥ�ݾױ��� �Ⱓ =  %d��", year);

	return 0;
}