//���� A, B�� ������, ������, �������� ���ϴ� ���α׷��Դϴ�. 
#include<stdio.h>

int make_intersection_set(int set_a[], int size_a, int set_b[], int s_b, int result[]);//������ �Լ� 
int make_union_set(int set_a[], int size_a, int set_b[], int s_b, int result[]);//������ �Լ� 
int make_difference_set(int set_a[], int size_a, int set_b[], int s_b, int result[]);//������ �Լ� 

int main(void)
{
	int set_a[] = { 2, 3, 7, 10, 11, 18, 20, 21 };
	int set_b[] = { 3, 6, 10, 14, 17 };
	int result[20];
	int size_a = sizeof(set_a) / sizeof(int);
	int size_b = sizeof(set_b) / sizeof(int);

	make_intersection_set(set_a, size_a, set_b, size_b, result);
	make_union_set(set_a, size_a, set_b, size_b, result);
	make_difference_set(set_a, size_a, set_b, size_b, result);

	return 0;
}

int make_intersection_set(int set_a[], int size_a, int set_b[], int size_b, int result[])//������ �Լ� 
{
	int i, j, cnt = 0;

	for (i = 0; i < size_a; i++)
	{
		for (j = 0; j < size_b; j++)
		{
			if (set_a[i] == set_b[j])
			{
				result[cnt++] = set_a[i];//���� A�� ��������, ���� for���� ����  �� �迭�� ���� ������ result �迭�� �����մϴ�. 
			}
		}
	}

	printf("������= { ");

	for (i = 0; i < cnt; i++)
	{
		printf("%d ,", result[i]);//result �迭�� ��(������)�� ����մϴ�. 
	}

	printf("\b}\n");
	return 0;
}

int make_union_set(int set_a[], int size_a, int set_b[], int size_b, int result[])//������ �Լ� 
{
	int i, j, temp, cnt1 = 0, cnt2 = 0;

	for (i = 0; i < size_a; i++)
	{
		result[i] = set_a[i];//���� A�� ���� result �迭�� ù �ּҺ��� �����մϴ�. 
	}

	for (i = 0; i < size_b; i++)
	{
		result[size_a + i] = set_b[i];//���� B�� ���� result �迭�� ����� ����A ���� �ּҺ��� �����մϴ�.  
	}

	for (i = 0; i < size_a; i++)
	{
		for (j = 0; j < size_b; j++)
		{
			if (set_a[i] == set_b[j])
			{
				result[size_a + j] = 0;//���� A�� ���� ���� B�� ���� ��� ���ؼ� ���� ���� result �迭�� ����B �κ��� 0���� ����ϴ�.(�ߺ� ������ ����)  
				cnt1++;
			}
		}
	}

	for (i = 0; i < size_b; i++)
	{
		if (result[size_a + i] != 0)
		{
			result[size_a + cnt2++] = result[size_a + i];//0�� ������ ���� result �迭�� ���ּҺ��� �����մϴ�. 
		}
	}

	for (i = 0; i < size_a + size_b - cnt1; i++)
	{
		for (j = 0; j < size_a + size_b - cnt1; j++)
		{
			if (result[j] > result[j + 1])
			{
				temp = result[j];
				result[j] = result[j + 1];
				result[j + 1] = temp;//�����Ʈ�� ���� result �迭�� ũ������� �����մϴ�. 
			}
		}
	}


	printf("������= { ");

	for (i = 0; i < size_a + size_b - cnt1; i++)
	{
		printf("%d ,", result[i]);//result �迭�� ��(������)�� ����մϴ�. 
	}

	printf("\b}\n");
	return 0;
}

int make_difference_set(int set_a[], int size_a, int set_b[], int size_b, int result[])//������ �� 
{
	int i, j, cnt1 = 0, cnt2 = 0;

	for (i = 0; i < size_a; i++)
	{
		result[i] = set_a[i];//���� A�� ���� result �迭�� ù �ּҺ��� �����մϴ�. 
	}

	for (i = 0; i < size_a; i++)
	{
		for (j = 0; j < size_b; j++)
		{
			if (set_a[i] == set_b[j])
			{
				result[i] = 0;//���� A�� ���� ���� B�� ���� ��� ���ؼ� ���� ���� result �迭�� ���� A �κ��� 0���� ����ϴ�.(������ ����)
				cnt1++;
			}

		}
	}

	for (i = 0; i < size_a; i++)
	{
		if (result[i] != 0)
		{
			result[cnt2++] = result[i];//0�� ������ ���� result �迭�� ���ּҺ��� �����մϴ�.
		}
	}

	printf("������= { ");

	for (i = 0; i < cnt2; i++)  // i<cnt2 = A-B, i<cnt1 = B-A�̸�, ���� A-B�� �����մϴ�. 
	{
		printf("%d ,", result[i]);//result �迭�� ��(A-B ������)�� ����մϴ�. 
	}

	printf("\b}\n");
	return 0;
}
