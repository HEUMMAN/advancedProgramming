//행렬을 2개 입력 받아 덧셈 결과를 출력하는 프로그램입니다.

#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX 10


int  main()
{
	int matrix_a[MAX][MAX], matrix_b[MAX][MAX];
	unsigned int matrix_row, matrix_column;
	printf("행렬의 크기를 입력해주세요 (m n) : ");
	scanf("%d %d", &matrix_row, &matrix_column);


	printf("행렬 A의 원소를 입력해주세요(%d개)\n", matrix_row * matrix_column);
	for (int i = 0; i < matrix_row; i++)
	{
		for (int j = 0; j < matrix_column; j++)
		{
			scanf("%d", &matrix_a[i][j]);
		}
	}

	printf("행렬 B의 원소를 입력해주세요(%d개)\n", matrix_row * matrix_column);
	for (int i = 0; i < matrix_row; i++)
	{
		for (int j = 0; j < matrix_column; j++)
		{
			scanf("%d", &matrix_b[i][j]);
		}
	}

	printf("덧셈결과는 다음과 같습니다.\n");
	for (int i = 0; i < matrix_row; i++)
	{
		for (int j = 0; j < matrix_column; j++)
		{
			printf("\t%d", matrix_a[i][j] + matrix_b[i][j]);
		}
		printf("\n");
	}
	return 0;
}