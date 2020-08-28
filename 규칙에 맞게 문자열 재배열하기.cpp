//입력된 문자열을 규칙에 맞춰 재배열하는 프로그램입니다. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

void no_space(char* pStr);
int main()
{
	char arr[100];
	int column;
	double row;

	printf("문자열을 입력해주세요 : ");
	scanf("%[^\n]", arr);
	printf("칼럼 수를 입력해주세요 : ");
	scanf("%d", &column);

	no_space(arr);
	strlwr(arr);
	row = ((double)strlen(arr) / column);
	int ceilrow = ceil(row);


	/*printf("소문자 변환, 공백제거 결과 : %s\n",arr);
	printf("열의 수는 %d입니다.",ceilrow);*/

	for (int i = 0; i < ceilrow; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if ((i + (j * ceilrow)) < strlen(arr))
			{
				printf("%2c", arr[i + (j * ceilrow)]);
			}
			else(printf("%2c", 'x'));
		}
		printf("\n");
	}

	return 0;
}

void no_space(char* pStr)
{
	char* pStr2 = pStr;
	while (*pStr != 0)
	{
		if (*pStr != ' ')
		{
			*pStr2 = *pStr;
			pStr2++;
		}
		pStr++;
	}
	*pStr2 = 0;
}