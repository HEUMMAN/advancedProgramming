#include <stdio.h>
#include <math.h>
int Euclidean(int a, int b);//함수의 원형(메인 함수 아래에서 함수를 찾아줍니다. 메인함수 보기 편하라고) 

int main()
{
	int a, b, c;
	int x, y;

	printf("ax + by = c의 형태로 식을 입력해주세요.\n");
	scanf("%dx + %dy = %d", &a, &b, &c);	//ax + by = c의 형태로 식을 입력 받아 a, b, c의 값을 저장합니다. 
	printf("%d, %d, %d\n", a, b, c);     //  a,b,c값 확인 
	int gcd = Euclidean(a, b);
	printf("a와 b의 최대공약수는 %d입니다.\n", gcd); // 최대공약수 확인, 음수일 경우 제대 

	double r;
	r = (double)c / gcd;

	//printf ("%lf\n",r);// 최대공약수가 C를 떨어지게 나눌 수 있는지 판별해야합니다.(나누면 해가 있고, 못 나누면 해가 없습니다.) 
	if ((r - (int)r) == 0)
	{
		printf("해를 구해야합니다\n");
		int A = a / gcd;
		int B = b / gcd;
		int C = c / gcd;
		printf("입력된 식을 최대공약수로 나누면\n%dx + %dy = %d 입니다.", A, B, C); // 
	}
	else
	{
		printf("해가 없습니다...");
	}
}

int Euclidean(int a, int b)//최대공약수를 구하는 함수입니다. ?앞의 식이 0외에 모든 수일 경우 :앞의 값이, 0일 경우 : 뒤의 값이 반환되는 재귀함수입니다.  
{
	if (a > b)
	{
		return a % b ? Euclidean(b, a % b) : abs(b);
	}
	else {
		return b % a ? Euclidean(a, b % a) : abs(a);
	}
}

