#include <stdio.h>
int main()
{
	double x, sum;

	scanf("%lf", &x);
	sum = x * 1.07 * 1.10;
	printf("Total cost: %.2lf Baht", sum);

	return 0;
}