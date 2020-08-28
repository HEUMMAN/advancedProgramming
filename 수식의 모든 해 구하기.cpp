#include <stdio.h>
#include <math.h>
int Euclidean(int a, int b);//�Լ��� ����(���� �Լ� �Ʒ����� �Լ��� ã���ݴϴ�. �����Լ� ���� ���϶��) 

int main()
{
	int a, b, c;
	int x, y;

	printf("ax + by = c�� ���·� ���� �Է����ּ���.\n");
	scanf("%dx + %dy = %d", &a, &b, &c);	//ax + by = c�� ���·� ���� �Է� �޾� a, b, c�� ���� �����մϴ�. 
	printf("%d, %d, %d\n", a, b, c);     //  a,b,c�� Ȯ�� 
	int gcd = Euclidean(a, b);
	printf("a�� b�� �ִ������� %d�Դϴ�.\n", gcd); // �ִ����� Ȯ��, ������ ��� ���� 

	double r;
	r = (double)c / gcd;

	//printf ("%lf\n",r);// �ִ������� C�� �������� ���� �� �ִ��� �Ǻ��ؾ��մϴ�.(������ �ذ� �ְ�, �� ������ �ذ� �����ϴ�.) 
	if ((r - (int)r) == 0)
	{
		printf("�ظ� ���ؾ��մϴ�\n");
		int A = a / gcd;
		int B = b / gcd;
		int C = c / gcd;
		printf("�Էµ� ���� �ִ������� ������\n%dx + %dy = %d �Դϴ�.", A, B, C); // 
	}
	else
	{
		printf("�ذ� �����ϴ�...");
	}
}

int Euclidean(int a, int b)//�ִ������� ���ϴ� �Լ��Դϴ�. ?���� ���� 0�ܿ� ��� ���� ��� :���� ����, 0�� ��� : ���� ���� ��ȯ�Ǵ� ����Լ��Դϴ�.  
{
	if (a > b)
	{
		return a % b ? Euclidean(b, a % b) : abs(b);
	}
	else {
		return b % a ? Euclidean(a, b % a) : abs(a);
	}
}

