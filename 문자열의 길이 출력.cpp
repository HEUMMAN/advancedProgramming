//���ڿ��� �Է¹޾� �� ���̸� ����ϴ� ���α׷��Դϴ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int length_of_string(const char* pStr);
int main()
{
	char arr[100];
	int space = 0;
	int result1, result2;

	printf("100�� �̳��� ���ڸ� �Է����ּ��� : ");
	scanf("%[^\n]", &arr);

	for (int i = 0; i < length_of_string(arr); i++)
	{
		if (arr[i] == ' ')
			space++;
	}

	result1 = length_of_string(arr);
	result2 = result1 - space;

	printf("���ڿ��� ���̴� ���� ���� %d�� �Դϴ�.\n", result1);
	printf("���ڿ��� ���̴� ���� ���� %d�� �Դϴ�.\n", result2);
}

int length_of_string(const char* pStr)
{
	int count;
	for (count = 0; pStr[count]; count++);
	return count;
}