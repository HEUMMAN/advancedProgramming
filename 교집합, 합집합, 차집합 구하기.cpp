//집합 A, B의 교집합, 합집합, 차집합을 구하는 프로그램입니다. 
#include<stdio.h>

int make_intersection_set(int set_a[], int size_a, int set_b[], int s_b, int result[]);//교집합 함수 
int make_union_set(int set_a[], int size_a, int set_b[], int s_b, int result[]);//합집합 함수 
int make_difference_set(int set_a[], int size_a, int set_b[], int s_b, int result[]);//차집합 함수 

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

int make_intersection_set(int set_a[], int size_a, int set_b[], int size_b, int result[])//교집합 함수 
{
	int i, j, cnt = 0;

	for (i = 0; i < size_a; i++)
	{
		for (j = 0; j < size_b; j++)
		{
			if (set_a[i] == set_b[j])
			{
				result[cnt++] = set_a[i];//집합 A를 기준으로, 이중 for문을 통해  두 배열의 값이 같으면 result 배열에 저장합니다. 
			}
		}
	}

	printf("교집합= { ");

	for (i = 0; i < cnt; i++)
	{
		printf("%d ,", result[i]);//result 배열의 값(교집합)을 출력합니다. 
	}

	printf("\b}\n");
	return 0;
}

int make_union_set(int set_a[], int size_a, int set_b[], int size_b, int result[])//합집합 함수 
{
	int i, j, temp, cnt1 = 0, cnt2 = 0;

	for (i = 0; i < size_a; i++)
	{
		result[i] = set_a[i];//집합 A의 값을 result 배열의 첫 주소부터 저장합니다. 
	}

	for (i = 0; i < size_b; i++)
	{
		result[size_a + i] = set_b[i];//집합 B의 값을 result 배열에 저장된 집합A 다음 주소부터 저장합니다.  
	}

	for (i = 0; i < size_a; i++)
	{
		for (j = 0; j < size_b; j++)
		{
			if (set_a[i] == set_b[j])
			{
				result[size_a + j] = 0;//집합 A의 값과 집합 B의 값을 모두 비교해서 같은 값은 result 배열의 집합B 부분을 0으로 만듭니다.(중복 교집합 제거)  
				cnt1++;
			}
		}
	}

	for (i = 0; i < size_b; i++)
	{
		if (result[size_a + i] != 0)
		{
			result[size_a + cnt2++] = result[size_a + i];//0을 제외한 값을 result 배열의 앞주소부터 정리합니다. 
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
				result[j + 1] = temp;//버블소트를 통해 result 배열을 크기순으로 정렬합니다. 
			}
		}
	}


	printf("합집합= { ");

	for (i = 0; i < size_a + size_b - cnt1; i++)
	{
		printf("%d ,", result[i]);//result 배열의 값(합집합)을 출력합니다. 
	}

	printf("\b}\n");
	return 0;
}

int make_difference_set(int set_a[], int size_a, int set_b[], int size_b, int result[])//차집합 함 
{
	int i, j, cnt1 = 0, cnt2 = 0;

	for (i = 0; i < size_a; i++)
	{
		result[i] = set_a[i];//집합 A의 값을 result 배열의 첫 주소부터 저장합니다. 
	}

	for (i = 0; i < size_a; i++)
	{
		for (j = 0; j < size_b; j++)
		{
			if (set_a[i] == set_b[j])
			{
				result[i] = 0;//집합 A의 값과 집합 B의 값을 모두 비교해서 같은 값은 result 배열의 집합 A 부분을 0으로 만듭니다.(교집합 제거)
				cnt1++;
			}

		}
	}

	for (i = 0; i < size_a; i++)
	{
		if (result[i] != 0)
		{
			result[cnt2++] = result[i];//0을 제외한 값을 result 배열의 앞주소부터 정리합니다.
		}
	}

	printf("차집합= { ");

	for (i = 0; i < cnt2; i++)  // i<cnt2 = A-B, i<cnt1 = B-A이며, 현재 A-B로 동작합니다. 
	{
		printf("%d ,", result[i]);//result 배열의 값(A-B 차집합)을 출력합니다. 
	}

	printf("\b}\n");
	return 0;
}
