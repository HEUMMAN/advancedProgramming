//이차방정식의 해를 출력하는 프로그램입니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int  main()
{
	double coefficient_a, coefficient_b, coefficient_c;
	double discriminant;

	printf("a, b, c의 계수를 입력해주세요\n");
	printf("a : ");
	scanf("%lf", &coefficient_a);

	printf("b : ");
	scanf("%lf", &coefficient_b);

	printf("c : ");
	scanf("%lf", &coefficient_c);

	discriminant = coefficient_b * coefficient_b - 4.0 * coefficient_a * coefficient_c;

	if (coefficient_a == 0)
	{
		printf("x = %.4f \n", -coefficient_c / coefficient_b);
	}
	else if (discriminant > 0)
	{
		discriminant = sqrt(discriminant);
		printf("X = %.4f 또는 X = %.4f \n", (-coefficient_b + discriminant) / (2.0 * coefficient_a),
			(-coefficient_b - discriminant) / (2.0 * coefficient_a));
	}
	else if (discriminant == 0)
	{
		printf("X = %.4f \n", (-coefficient_b) / (2.0 * coefficient_a));
	}
	else
	{
		printf("근이 없습니다.\n");
	}
	return  0;
}