//영어단어 3개 입력받고, 사전순으로 출력하는 프로그램입니다.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int arrange_the_word(const void* voca_a, const void* voca_b);

int main()
{
	char voca[3][MAX];

	for (int i = 0; i < 3; i++)
	{
		scanf("%s", voca[i]);
	}
	printf("\n");

	qsort(voca, sizeof(voca) / sizeof(voca[0]), sizeof(voca[0]), arrange_the_word);

	for (int i = 0; i < 3; i++)
	{
		printf("%s \n", voca[i]);
	}


	return 0;
}

int arrange_the_word(const void* voca_a, const void* voca_b)
{
	return strcmp((char*)voca_a, (char*)voca_b);
}