//�Էµ� ���ڿ��� ��Ģ�� ���� ��迭�ϴ� ���α׷��Դϴ�. 

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

	printf("���ڿ��� �Է����ּ��� : ");
	scanf("%[^\n]", arr);
	printf("Į�� ���� �Է����ּ��� : ");
	scanf("%d", &column);

	no_space(arr);
	strlwr(arr);
	row = ((double)strlen(arr) / column);
	int ceilrow = ceil(row);


	/*printf("�ҹ��� ��ȯ, �������� ��� : %s\n",arr);
	printf("���� ���� %d�Դϴ�.",ceilrow);*/

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