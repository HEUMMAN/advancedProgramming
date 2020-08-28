//정수를 입력받아 단위별로 출력하는 프로그램입니다.

#define _CRT_SECURE_NO_WARNINGS
#define int long long int
#include <math.h>
#include <stdio.h>

int measure(int num);

int main()
{
	int number;
	printf("수를 입력해주세요 : ");
	scanf("%d", &number);

	measure(number);
	return 0;
}

int measure(int num)
{
	int input_num = num;
	int kyung = num / (pow(10, 16));
	num = num % 10000000000000000;

	int jo = num / (pow(10, 12));
	num = num % 1000000000000;

	int euk = num / (pow(10, 8));
	num = num % 100000000;

	int man = num / (pow(10, 4));
	num = num % 10000;

	int chun = num / (pow(10, 3));
	num = num % 1000;

	int baek = num / (100);
	num = num % (100);

	int sip = num / (10);
	num = num % (10);

	int il = num;

	if (input_num > pow(10, 16))
	{
		printf("%d경%d조%d억%d만%d천%d백%d십%d", kyung, jo, euk, man, chun, baek, sip, il);
	}
	else if (input_num > pow(10, 12))
	{
		printf("%d조%d억%d만%d천%d백%d십%d", jo, euk, man, chun, baek, sip, il);
	}
	else if (input_num > pow(10, 8))
	{
		printf("%d억%d만%d천%d백%d십%d", euk, man, chun, baek, sip, il);
	}
	else if (input_num > pow(10, 4))
	{
		printf("%d만%d천%d백%d십%d", man, chun, baek, sip, il);
	}
	else if (input_num > 1000)
	{
		printf("%d천%d백%d십%d", chun, baek, sip, il);
	}
	else if (input_num > 100)
	{
		printf("%d백%d십%d", baek, sip, il);
	}
	else if (input_num > 10)
	{
		printf("%d십%d", sip, il);
	}
	else
	{
		printf("%d", il);
	}
	return 0;
}