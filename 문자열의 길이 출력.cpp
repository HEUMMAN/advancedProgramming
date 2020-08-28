//문자열을 입력받아 그 길이를 출력하는 프로그램입니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int length_of_string(const char* pStr);
int main()
{
	char arr[100];
	int space = 0;
	int result1, result2;

	printf("100자 이내로 문자를 입력해주세요 : ");
	scanf("%[^\n]", &arr);

	for (int i = 0; i < length_of_string(arr); i++)
	{
		if (arr[i] == ' ')
			space++;
	}

	result1 = length_of_string(arr);
	result2 = result1 - space;

	printf("문자열의 길이는 공백 포함 %d자 입니다.\n", result1);
	printf("문자열의 길이는 공백 제외 %d자 입니다.\n", result2);
}

int length_of_string(const char* pStr)
{
	int count;
	for (count = 0; pStr[count]; count++);
	return count;
}