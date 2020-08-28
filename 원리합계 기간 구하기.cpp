//원리합계 기간을 구해주는 프로그램입니다. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int money, goal, interest, sum, year;

	printf("초기 입금액을 입력해주세요 : ");
	scanf("%d", &money);
	printf("목표 금액을 입력해주세요 : ");
	scanf("%d", &goal);
	printf("연이율(%%)을 입력해주세요 : ");
	scanf("%d", &interest);

	for (year = 0; sum <= goal; year++)
	{
		sum = money * (pow((1 + (interest * 0.01)), year));
	}
	year = year - 1;

	printf("목표금액까지 기간 =  %d년", year);

	return 0;
}