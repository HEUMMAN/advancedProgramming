//����� 2�� �Է� �޾� ���� ����� ����ϴ� ���α׷��Դϴ�.

#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX 10


int  main()
{
	int matrix_a[MAX][MAX], matrix_b[MAX][MAX];
	unsigned int matrix_row, matrix_column;
	printf("����� ũ�⸦ �Է����ּ��� (m n) : ");
	scanf("%d %d", &matrix_row, &matrix_column);


	printf("��� A�� ���Ҹ� �Է����ּ���(%d��)\n", matrix_row * matrix_column);
	for (int i = 0; i < matrix_row; i++)
	{
		for (int j = 0; j < matrix_column; j++)
		{
			scanf("%d", &matrix_a[i][j]);
		}
	}

	printf("��� B�� ���Ҹ� �Է����ּ���(%d��)\n", matrix_row * matrix_column);
	for (int i = 0; i < matrix_row; i++)
	{
		for (int j = 0; j < matrix_column; j++)
		{
			scanf("%d", &matrix_b[i][j]);
		}
	}

	printf("��������� ������ �����ϴ�.\n");
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